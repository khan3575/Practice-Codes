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
		int a,b,k;
		cin>>a>>b>>k;
		int ans=0;
		int l= ceil(double(a)/k), r=ceil(double(b)/k);

		if(r>=l)
		{
			ans= r;
			ans*=2;
		}
		else{
			ans = l;
			ans*=2;
			ans--;
		}
		cout<<ans<<endl;
	}

	return 0;
}