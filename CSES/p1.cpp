#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 2e5;
const int all = (1 << 25) - 1;

int tree[4 * mx], a[mx];

void build(int node, int l, int r) {
    if (l == r) {
        tree[node] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    int lc = node * 2, rc = lc + 1;
    build(lc, l, mid);
    build(rc, mid + 1, r);
    tree[node] = tree[lc] & tree[rc];
}

int seg(int node, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return all;
    if (ql <= l && r <= qr) return tree[node];
    int mid = (l + r) / 2;
    return seg(node * 2, l, mid, ql, qr) & seg(node * 2 + 1, mid + 1, r, ql, qr);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        build(1, 1, n);

        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            int current_and = all;
            for (int j = i; j <= n; j++) {
                current_and &= a[j];
                ans += current_and;
                if (current_and == 0) break;  // Early exit if AND becomes 0
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
