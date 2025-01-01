#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N = 3e5+5;

vector<ll> fact(N), inv(N);

ll binaryExpo(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (ll i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % mod;
    }
    inv[N - 1] = binaryExpo(fact[N - 1], mod - 2);  // inverse of fact[N-1]
    for (ll i = N - 2; i >= 0; i--) {
        inv[i] = inv[i + 1] * (i + 1) % mod;
    }
}

ll nCr(ll n, ll r) {
    if (r > n) return 0;
    return fact[n] * inv[r] % mod * inv[n - r] % mod;
}

int main() {
    fastIO;
    precompute();
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll res = 0;
        
        // Efficiently calculate the sum of combinations C(i, k) for i = k to n
        ll comb = 1;
        for (ll i = 0; i < k; i++) {
            comb = comb * (n - i) % mod;
            comb = comb * inv[i + 1] % mod;
        }
        res = comb;

        for (ll i = k; i < n; i++) {
            comb = comb * (n - i) % mod;
            comb = comb * inv[i + 1 - k] % mod;
            res = (res + comb) % mod;
        }

        cout << res << "\n";
    }
    return 0;
}
