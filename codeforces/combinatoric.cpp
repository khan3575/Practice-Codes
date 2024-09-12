#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int C(int n, int r)
{
	if(n<r  || r<0 || n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	return C(n-1, r)+ C(n-1, r-1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, r;
	cin>>n>>r;
	cout<<C(n,r)<<endl;


	return 0;
}