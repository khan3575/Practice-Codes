#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findseq(ll n)
{
	if(n==1)
	{
		return 1;
	}
	int cnt=1;
	if(n&1)
	{
		cnt+= findseq((3*n)+1);
	}
	else{
		cnt+= findseq(n/2);
	}
	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	cout<<findseq(n)<<endl;

	return 0;

}