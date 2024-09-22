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
		ll n,m,q;
		cin>>n>>m>>q;
			ll a,b;
			cin>>a>>b;
			ll dloc;
			cin>>dloc;
			int mn= min(a,b);
			int mx= max(a,b);
			if(dloc<mn)
			{
				cout<<mn-1<<endl;
			}
			else if(dloc>mx)
			{
				cout<<n-mx<<endl;
			}
			else{
				int mid= (a+b)/2;
				cout<<min(mid-mn, mx-mid)<<endl;
			}
		
	}	

	return 0;
}