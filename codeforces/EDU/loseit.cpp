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
	int arr[n];
	int check[8]={-1,4,8,15,16,23,42};
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int cnt[8]={0};
	cnt[0]=1e6;
	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=6; j++)
		{
			if(arr[i]==check[j] && cnt[j-1])
			{
				cnt[j]++;
				cnt[j-1]--
			}
		}
	}
	// for(auto it: cnt)
	// {
	// 	cout<<it<<endl;
	// }
	cout<< n- (6*cnt[6])<<endl;
	
	return 0;
}