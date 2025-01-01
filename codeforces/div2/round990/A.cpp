#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		ll sum=0;
		int cnt=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			ll sq= sqrt(sum);
			if((sq+1)*(sq+1)<=sum)
			{
				sq++;
			}
			if(sq*sq==sum and sq%2==1)
				{
					cnt++;
				}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}