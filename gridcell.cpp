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
		ll n, m, x,y,l;
		cin>> n >> m >> x >> y >> l;
		if(l==1)
		{
			cout<< n*m<<'\n';
		}
		else{
			ll left=1, right=1;

			left+= ((m-y)/l +(y-1)/l);
			right+= ((n-x)/l  + (x-1)/l);
			cout<<left*right<<endl;
		}
	}
	return 0;
}