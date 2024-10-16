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
	for(int i=0;i<t; i++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;

		bool ok= next_permutation(s.begin(),s.end());

		if(ok)
		{
			cout<<i+1<<" "<<s<<endl;
		}
		else{
			cout<<i+1<<" BIGGEST\n";
		}
		
	}

	
	return 0;
}