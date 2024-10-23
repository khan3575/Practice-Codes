#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	for(ll i=1; i<=n; i++)
	{
		ll total_com= (i*i)*((i*i)-1)/2;
		ll total_attacking_pos= 4*(i-1)*(i-2);
		cout<<total_com- total_attacking_pos<<endl;
	}
	
	return 0;
}