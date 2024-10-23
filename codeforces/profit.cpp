#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a>=b)
		{
			cout<<a<<'\n';
		}
		else{
			ll dif= b-a;
			a-=dif;
			b-= (2*dif);

			if(a<=b)
			{
				cout<< max(0ll,a)<<'\n';
			}else{
				cout<<a<<'\n';
			}


		}
	}
	
	return 0;
}