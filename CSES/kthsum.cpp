#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int n, k;
const int N = 1e5+5;
ll arr[N], brr[N];

bool f(ll mid){
	ll rem=0;
	ll res=0;
	for(int i = 0; i < n; i++)
	{
		rem = mid - arr[i];
		ll up = upper_bound(brr, brr+n, rem)- brr ;
		res += up;
		if(res>=k)
		{
			break;
		}
	}
	return res >= k;
}
int main()
{
	fastIO;
	cin >> n >> k;
	for(int i=0; i < n ; i++ ){
		cin >> arr[i];
	}	
	for(int i = 0; i < n; i++){
		cin >> brr[i];
	}
	sort(arr , arr + n);
	sort(brr , brr + n);

	ll l = 0, r=1e14;
	ll ans = 0;
	while(l <= r)
	{
		ll mid = (l + r) / 2;
		if(f(mid)){
			ans= mid;
			r=mid-1;
		}
		else{
			l= mid+1;
		}
	}
	cout << ans << endl;

	
	return 0;
}