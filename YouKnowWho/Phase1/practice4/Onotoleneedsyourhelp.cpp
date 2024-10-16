#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	int x=0;
	int a;
	while(n--)
	{	
		cin>>a;
		x^=a;
	}
	cout<<x<<endl;
	
	return 0;
}