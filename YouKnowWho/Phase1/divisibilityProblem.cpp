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
		int n,k;
		cin>>n>>k;
		if(n%k==0)
		{
			cout<<0<<endl;
		}
		else{
			int ans= n%k;
			ans= k-ans;
			cout<<ans<<endl;
		}

	}		

	return 0;
}