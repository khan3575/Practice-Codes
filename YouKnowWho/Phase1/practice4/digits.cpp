#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n,k;
	cin>>n>>k;
	int cnt=0;
	while(n)
	{
		n/=k;
		cnt++;
	}
	cout<<cnt<<endl;
	
	return 0;
}