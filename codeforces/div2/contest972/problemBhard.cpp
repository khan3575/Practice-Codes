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
		int n,m,q;
		cin>>n>>m>>q;
		vector<int>v(m);
		for(int i=0; i<m; i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		while(q--)
		{
			int x;
			cin>>x;
			if(x<v[0])
			{
				cout<<v[0]-1<<endl;
			}
			else if(x>v[m-1]){
				cout<<n-v[m-1]<<endl;
			}
			else{
			auto it= upper_bound(v.begin(),v.end(),x);
			auto it1=it-1;
			int mid= (*it+*it1)/2;
			int ans= min(abs(*it-mid), abs(*it1-mid));
			cout<<ans<<endl;
			}
		}
	}	

	return 0;
}