#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++){
		string s;
		getline(cin,s);
		string word;
		stringstream ss(s);
		while(ss>>word)
		{
			reverse(word.begin(),word.end());
			cout<<word<<" ";
		}
		cout<<'\n';
	}
	
	return 0;
}