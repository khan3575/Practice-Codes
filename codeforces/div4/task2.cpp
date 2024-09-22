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
		while(q--)
		{
			
			int dloc;
			cin>>dloc;
			if(dloc<v[0])
			{
				
				cout<<v[0]-1<<'\n';
			}
			else if(dloc>v[m-1])
			{
				cout<< n-v[m-1]<<'\n';
			}
			else{
				auto it1= upper_bound(v.begin(),v.end(),dloc);
				auto it2= it1-1;

				int mid= (*it1+*it2)/2;
				cout<<min(abs(mid-*it1),abs(mid-*it2))<<'\n';
			}
		}
		
	}	

	return 0;
}