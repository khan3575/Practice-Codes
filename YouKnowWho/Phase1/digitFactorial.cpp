#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll factor[11];
	ll fact=1;
	factor[0]=1;
	for(int i=1; i<=10; i++)
	{
		fact*=i;
		factor[i]=fact;
	}
	int n;
	cin>>n;
	ll count=0;
	for(int i=10; i<=n; i++)
	{
		ll dig=i;
		ll sum=0;
		while(dig>0)
		{
			ll temp= dig%10;
			sum+=factor[temp];

			dig/=10;
		}
		if(sum%i==0)
		{
			count+=i;
		}
	}
	cout<<count<<endl;

	return 0;
}