#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	if(n&1)
	{
		cout<< -1LL*((n+1)/2)<<endl;
	}
	else{
		cout<<n/2<<endl;
	}
	return 0;
}