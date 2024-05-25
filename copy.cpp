#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (gcd)
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to count reachable cells using number theory
long long count_reachable_cells(long long N, long long M, long long X0, long long Y0, long long L) {
    // Calculate periods
    long long Px = gcd(N, 2 * L);
    long long Py = gcd(M, 2 * L);
    
    // Number of distinct cells
    return Px * Py;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        long long N, M, X0, Y0, L;
        cin >> N >> M >> X0 >> Y0 >> L;
        long long result = count_reachable_cells(N, M, X0, Y0, L);
        cout << ((M*N)-result)/L << endl;
    }

    return 0;
}
