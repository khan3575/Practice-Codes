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
		ll n,m,a,b;
		cin>>n>>m>>a>>b;
		ll total= n*m;
		//cout<<total<<endl;
		ll currentLoc= ((a-1ll)*m+b);
		//cout<<currentLoc<<endl;
		ll remaining= total-currentLoc;
		//cout<<remaining<<endl;

		ll rowskiped = n-a;
		remaining-= rowskiped;
		//cout<<remaining<<endl;

		ll ans= remaining+ (rowskiped*m);
		//cout<<ans<<endl;
		cout<<ans<<'\n';
		
	}
	
	return 0;
}