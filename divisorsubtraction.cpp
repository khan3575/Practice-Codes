#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N= 1e6+2;

vector<ll > prime;
vector <bool>vis(N);
void sieve()
{
	for(ll i=2; i<= 1e6; i++)
	{
		if(vis[i]!=true)
		{
			prime.push_back(i);
			for(ll j=i*2; j <= 1e6; j+=i)
			{
				vis[j]= true;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	sieve();
	int ans= 0;
	for(auto x: prime)
	{
		if(n%x==0 && n>=x)
		{
			ans= n/x;
			break;
		}
	}
	cout<< ans<<endl;

	return 0;
}