#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		bool ok=false;
		if(n%2==1)
		{
			ok=true;
		}
		else{
			if((n&(n-1))==0)
			{
				ok=false;
			}
			else{
				ok=true;
			}
		}
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