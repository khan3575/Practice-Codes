#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<string>v(n);
		string s1="1543";
		for(int i=0; i<n; i++)
		{
			cin>>v[i];
		}
		int cnt=0;
		for(int k=0; k<min(n,m)/2; k++)
		{
			string st;
			for(int i=k; i<m-k; i++)
			{
				st+=v[k][i];
			}
			for(int i=k+1; i<n-k; i++)
			{
				st+=v[i][m-k-1];
			}
			if(n-k-1>k){
				for(int i=m-k-1; i>=k; i--)
				{
					st+=v[n-k-1][i];
				}
			}
			if(m-k-1>k)
			{
				for(int i= n-k-2; i>k; i--)
				{
					st+=v[i][k];
				}
			}
			for(int i=0; i= (int)st.size()-4; i++)
			{
				string ter= st.substr(i,4);
				if(ter==s1)
				{
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;

	}
	
	return 0;
}