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
	string str1="http://";
	string str2="https://";
	while(t--)
	{
		string s;
		cin>>s;
		string st= s.substr(0,7);
		cout<<st<<endl;
	}

	return 0;
}