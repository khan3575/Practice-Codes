#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int knapsack(int ind, int wight_left)
{
	if(ind==0)
	{
		return 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, weight;
	cin>>n>>weight;
	int w[n], v[n];
	for(int i=0; i<n; i++)
	{
		cin>>w[i]>>v[i];
	}
	cout<<knapsack(n-1, w);

	return 0;
}