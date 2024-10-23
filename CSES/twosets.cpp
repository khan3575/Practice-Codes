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
	int number_of_odd= (n+1)/2;
	ll sum=  n*(n+1)/2;
	ll half= sum/2;
	vector<int>v(n);
	if(sum%2!=0)
	{
		cout<<"NO\n";
		return 0;
	}

	for(int i=1; i<=n;i++)
	{
		v[i-1]=i;
	}
	int ter=half;
	set<int>a,b;
	int sum=0;
	int i=n;
	while(sum+i<half)
	{
		sum+=i;
		a.insert(i);
		i--;
	}
	if(sum!=half)
	{

	}

	return 0;
}