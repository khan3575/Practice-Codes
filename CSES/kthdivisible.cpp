#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
bool isgood(ll mid, ll n, ll k)
{
	ll not_divisible = mid - (mid / n);
	return not_divisible >= k; 
}
int main()
{
	fastIO;
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll l = 0, r = 1e17;
		ll ans = 0;
		while(l <= r){
			ll mid = (l + r) / 2;
			if(isgood(mid, n, k))
			{
				ans = mid;
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}