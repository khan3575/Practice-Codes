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
		if(n==1 || n==3)
		{
			cout<<-1<<'\n';
		}
		else{
			string s="";
			if(n&1)
			{
				for(int i=0; i<n-4; i++)
				{
					s+='3';
				}
				s+="63";
			}
			else{
				for(int i=0; i<n-2; i++)
				{
					s+='3';
				}
			}
			s+= "66";

			cout<<s<<'\n';
		}
	}
	
	return 0;
}