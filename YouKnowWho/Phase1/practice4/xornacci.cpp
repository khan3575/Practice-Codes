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
	while(t--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		n%=3;
		if(n==0){
			cout<<a<<endl;
		}
		else if(n==1)
		{
			cout<<b<<endl;
		}
		else{
			cout<<(a^b)<<endl;
		}
	}
	
	return 0;
}