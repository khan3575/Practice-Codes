#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> columns(n);
        vector<int> row1(n), row2(n);

        // Input matrix
        for (int i = 0; i < n; i++) cin >> row1[i];
        for (int i = 0; i < n; i++) cin >> row2[i];

        // Prepare column sums with indices
        for (int i = 0; i < n; i++) {
            columns[i] = {row1[i] + row2[i], i};
        }

        // Sort columns by their sum in descending order
        sort(columns.rbegin(), columns.rend());

        // Rearrange rows according to sorted columns
        vector<int> sorted_row1(n), sorted_row2(n);
        for (int i = 0; i < n; i++) {
            sorted_row1[i] = row1[columns[i].second];
            sorted_row2[i] = row2[columns[i].second];
        }

        // Prefix sums for top and bottom rows
        vector<long long> top_prefix(n + 1, 0), bottom_prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            top_prefix[i + 1] = top_prefix[i] + sorted_row1[i];
            bottom_prefix[i + 1] = bottom_prefix[i] + sorted_row2[i];
        }

        // Compute maximum path cost
        long long max_cost = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            long long path_cost = top_prefix[i] + bottom_prefix[n] - bottom_prefix[i];
            max_cost = max(max_cost, path_cost);
        }

        // Output result
        cout << max_cost << endl;
    }
    return 0;
}
