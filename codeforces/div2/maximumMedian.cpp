#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N = 2e5 + 5;
int arr[N];
int n, k;
bool isgood(ll mid)
{
	int m= n/2;
	ll res=0;
	for(int i=m; i<n; i++){
		if(mid>=arr[i]){
			res +=  mid-arr[i];
		}
		else{
			res+=0;
		}
		if(res>k)
		{
			break;
		}
	}
	//cout<<k<< "k  res" <<res<<endl;
	return res<=k;
}
int main()
{
	fastIO;
	cin>>n>>k;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr , arr + n);

	ll l=0, r=1e18;
	ll ans=0;
	while(l<=r)
	{
		ll mid= (l + r) / 2;

		if(isgood(mid))
		{	
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}