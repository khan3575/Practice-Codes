#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_permutation(int n) {
    vector<int> permutation(n);
    
    // Separate the even and odd positions based on index (1-based)
    int low = 1;
    int high = n;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 1) {
            // Odd index (1-based) - smaller values
            permutation[i] = low++;
        } else {
            // Even index (1-based) - larger values
            permutation[i] = high--;
        }
    }

    // Calculate maximum value of k
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 1) { // Odd index (1-based), use AND
            k &= permutation[i];
        } else { // Even index (1-based), use OR
            k |= permutation[i];
        }
    }

    // Output the result
    cout << k << endl;
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    vector<int> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }

    for (int i = 0; i < t; ++i) {
        solve_permutation(test_cases[i]);
    }

    return 0;
}
