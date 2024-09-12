#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int func(int weight, int w[], int p[], int n)
{
	if(n==0 || weight==0)
	{
		return 0;
	}
	if(w[n-1]>weight)
	{
		return func(weight,w,p,n-1);
	}

	else{
		return max(p[n-1]+func(weight-w[n-1] ,w,p,n-1), func(weight,w,p,n-1));
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, weight;
	cin>>n>>weight;
	int w[n],p[n];
	for(int i=0; i<n; i++)
	{
		cin>>w[i]>>p[i];
	}
	int res= func(weight,w,p,n);
	cout<<res<<endl;

	return 0;
}