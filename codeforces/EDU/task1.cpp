#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int cnt=0;
	int n=16;
	while(n)
	{
		n/=2;
		cnt++;
	}
	cout<<cnt<<endl;
	
	return 0;
}