#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>> n;
	ll length= sqrt(n);
	bool ok= true;
	ll ans=0;
	for(ll i=2; i<=length; i++)
	{
		if(n%i==0)
		{
			ok=false;
			ans= i;
			break;
		}
	}
	if(ok)
	{
		cout<< 1<<endl;
	}
	else{
		cout << 1 + (n-ans)/2<<endl;
	}
	return 0;
}