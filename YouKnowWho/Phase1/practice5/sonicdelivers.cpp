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
		int l,r;
		cin>>n;
		int left=INT_MAX,right=INT_MAX;
		for(int i=0; i<n; i++)
		{
			cin>>l>>r;
			left= min(l,left);
			right=min(r,right);
		}
		cout<<left<<right<<endl;
		cout<<(n/left)<<(n/right)<<endl;
	}
	
	return 0;
}