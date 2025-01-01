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
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Sort the array
        sort(a.begin(), a.end());
        
        // Check if the largest three elements can form a valid triangle
        if (a[n - 3] + a[n - 2] > a[n - 1]) {
            cout << 0 << endl;
        } else {
            // Minimum operations required to make at least three sides that can form a triangle
            cout << n - 2 << endl;
        }
    }
    
    return 0;
}
