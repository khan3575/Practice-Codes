#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

vector<pair<int, int>> divisorPairs[MAXN];


void preprocessDivisors(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            divisorPairs[j].emplace_back(i, j / i);
        }
    }
}

// Function to find LIS using dynamic programming
int findLIS(const vector<pair<int, int>>& pairs) {
    int n = pairs.size();
    if (n == 0) return 0;

    vector<int> dp(n, 1);


    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (pairs[j].first < pairs[i].first && pairs[j].second < pairs[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    preprocessDivisors(MAXN - 1);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        vector<int> A(N);
        set<int> uniqueAreas;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            uniqueAreas.insert(A[i]);
        }

        vector<pair<int, int>> validPairs;
        for (int area : uniqueAreas) {
            for (auto& p : divisorPairs[area]) {
                validPairs.push_back(p);
            }
        }


        sort(validPairs.begin(), validPairs.end());

        int lisLength = findLIS(validPairs);

        cout << "Case " << t << ": " << lisLength << endl;
    }

    return 0;
}