#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact(ll n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}