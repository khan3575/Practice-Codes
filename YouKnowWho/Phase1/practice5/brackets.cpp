#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	string s;
	cin>>s;
	vector<char>st;
	int cnt=0;
	char ch;
	for(int i=0; i<s.size(); i++)
	{
		ch=s[i];
		if(ch=='(')
		{
			st.push_back(ch);
		}
		else{
			if(!st.empty())
			{
				cnt+=2;
				st.pop_back();
			}
		}
	}
	//cout<< (int)s.size()-(int)st.size();
	cout<<cnt<<'\n';
	return 0;
}