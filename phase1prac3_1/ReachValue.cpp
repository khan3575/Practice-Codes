#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ok=false;
void fun(ll n, ll init)
{

	if(n==init)
	{
		ok=true;
		return;
	}
	 if(n<init)
	{
		return;
	}

	fun(n, init*10);
	fun(n, init*20);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ok=false;
		ll n;
		cin>>n;
		
		fun(n,1LL);
		if(ok)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}