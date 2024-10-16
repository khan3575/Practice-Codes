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
	int n=s.size();
	bool arr[27]={false};
	char ch;
	for(int i=0; i<n; i++)
	{
		arr[s[i]-'a']=true;
	}

	bool ok=true;
	int chari=0;
	for(int i=0; i<26; i++)
	{
		//cout<<arr[i]<<" ";
		if(!arr[i])
		{
			ok=false;
			chari=i;
			break;
		}
	}
	if(ok)
	{
		cout<<"None\n";
	}
	else{
		cout<<char('a'+chari)<<endl;
	}
	return 0;
}