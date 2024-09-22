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
		int n;
		cin>>n;
		int ans=1;
		for(int i=1; i<=n;i++)
		{
			ans*=i;
			ans%=10;
		}
		cout<<ans<<endl;
	}

	return 0;
}