#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	string word="";
	set<string> st;
	char c;
	while(cin.get(c))
	{
		if(isalpha(c))
		{
			word+=tolower(c);
		}
		else{
			st.insert(word);
			word="";
		}
	}
	for(auto it: st)
	{
		if( it!="")
		cout<<it<<'\n';
	}
	return 0;
}