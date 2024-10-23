#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int phi(int n)
{
	//sqrt() eular
	int result=n;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			while(n%i)
			{
				n/=i;
				result-= (result/i);
			}
		}
	}
	if(n>1)
	{
		result-= result/n;
	}
	return result;
}

vector<int> phia(1000000);
void phi_1_to_n(int n)
{
	for(int i=0; i<=n; i++)
	{
		phia[i]=i;
	}
	for(int i =2; i<=n; i++)
	{
		if(phia[i]==i)
		{
			for(int j=i; j<=n; j++)
			{
				phia[j]-= phia[j]/i;
			}
		}
	}
}

int main()
{
	fastIO;
	int n;
	cin>>n;
	cout<<phi(n)<<endl;
	
	return 0;
}