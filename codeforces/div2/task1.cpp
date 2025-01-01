#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to calculate the number of valid pairs (x, y) for a single test case
long long count_pairs(long long k, long long l1, long long r1, long long l2, long long r2) {
    long long count = 0;
    long long power_of_k = 1; // Start with k^0 = 1
    
    while (power_of_k <= r2) {
        // Calculate the valid range for x
        long long x_min = max(l1, (l2 + power_of_k - 1) / power_of_k); // ceil(l2 / power_of_k)
        long long x_max = min(r1, r2 / power_of_k);
        
        if (x_min <= x_max) {
            count += (x_max - x_min + 1); // Add the number of valid x values
        }
        
        // Prepare for the next power of k
        if (power_of_k > r2 / k) break; // Avoid overflow
        power_of_k *= k;
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    
    vector<long long> results;
    
    for (int i = 0; i < t; ++i) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        results.push_back(count_pairs(k, l1, r1, l2, r2));
    }
    
    // Output all results
    for (auto res : results) {
        cout << res << endl;
    }
    
    return 0;
}
