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
		string s;
		cin>>s;
		int arr[26]={0};
		for(int i=0; i<n; i++)
		{
			arr[s[i]-'a']++;
		}
		vector<pair<int,char> >v;
		for(int i=0; i<26; i++)
		{
			if(arr[i]==0)
			{
				continue;
			}
			else{
				v.push_back({arr[i],(char)('a'+i)});
			}
		}
		sort(v.begin(),v.end());
		char st=v[0].second;
		char ed=v[(int)v.size()-1].second;
		string t="";
		bool ok=true;
		for(int i=0; i<n; i++){
			if(s[i]==st && ok)
			{
				t+=ed;
				ok=false;
			}
			else{
				t+=s[i];
			}
		}
		cout<<t<<endl;
	}
	
	return 0;
}