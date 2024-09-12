#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findLog(ll n)
{
	if(n==1)
	{
		return 0;
	}
	ll cnt=1;
	cnt+= findLog(n/2);
	return cnt;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	cout<<findLog(n)<<endl;
	return 0;
}