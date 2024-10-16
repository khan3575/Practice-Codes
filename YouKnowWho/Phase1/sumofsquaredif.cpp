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
		ll res1= (n*(n+1))/2;
		res1= res1*res1;

		ll res2= n*(n+1)*(2*n +1) /6;

		cout<<res1-res2<<endl;

	}

	return 0;
}