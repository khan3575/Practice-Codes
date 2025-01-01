#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate XOR for a given substring
int getXOR(const vector<int>& prefix, int l, int r) {
    return prefix[r] ^ prefix[l - 1];
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        // Build prefix XOR array
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] ^ (s[i - 1] - '0');
        }

        int max_xor = 0;
        vector<int> best_indices = {1, 1, 1, 1};

        // Compare prefixes with suffixes for maximum XOR
        for (int l1 = 1; l1 <= n; l1++) {
            for (int r1 = l1; r1 <= n; r1++) {
                int xor1 = getXOR(prefix, l1, r1);

                for (int l2 = l1; l2 <= n; l2++) { // Ensure substrings can overlap
                    for (int r2 = l2; r2 <= n; r2++) {
                        int xor2 = getXOR(prefix, l2, r2);
                        int current_xor = xor1 ^ xor2;

                        if (current_xor > max_xor) {
                            max_xor = current_xor;
                            best_indices = {l1, r1, l2, r2};
                        }
                    }
                }
            }
        }

        // Output the best indices
        for (int idx : best_indices) {
            cout << idx << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
