#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = (1<<30);

const int N=1000005;
int arr[N];
void divisor()
{
	for(int i=1; i<=N;i++)
	{
		for(int j=i; j<=N; j+=i)
		{
			arr[j]++;
		}
	}
}
int main()
{
	fastIO;
	divisor();
	int a, b,c;
	//cout<<ceil(5/3)<<endl;
	cin>>a>>b>>c;
	ll sum=0;
	for(ll i=1; i<=a; i++)
	{
		for(ll j=1; j<=b; j++)
		{
			for(ll k=1; k<=c; k++)
			{
				ll prod= arr[i*j*k];
				//cout<<prod<<" ";
				sum= ((sum%mod)+(prod%mod))%mod;
			}
		}
	}
	//cout<<"end";
	cout<<sum<<endl;
	return 0;
}