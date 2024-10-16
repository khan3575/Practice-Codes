#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	ll n,k;
	cin>>n>>k;
	int dif=k/n;
	if(k%n)
	{
		dif++;
	}
	cout<<dif<<endl;
	
	return 0;
}