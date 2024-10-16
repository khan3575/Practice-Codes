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
	for(int i=0; i<t; i++)
	{
		int n,k;
		cin>>n>>k;
		int cnt=0;
		if(k==1)
		{
			cout<<n<<endl;
			continue;
		}
		else if(n<k)
		{
			cout<<n<<endl;
			continue;
		}

		int temp=1;
		cnt=0;
		while(n>0)
		{
			cnt+= n%k;
			n/=k;

		}
		cout<<cnt<<endl;
	}
	
	return 0;
}