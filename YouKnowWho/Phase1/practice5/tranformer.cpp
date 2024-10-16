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
	while(t--){
		int n;
		cin>>n;
		map<int,int>mp;
		for(int i=0; i<n; i++)
		{
			int x;
			cin>>x;
			mp[x]++;
		}
		
		int cnt=0;
		int temp=1;
		for(auto it: mp)
		{
			cnt= max(cnt,it.second);
		}
		cout<<max(n%2, cnt-(n-cnt))<<endl;
	}
	return 0;
}