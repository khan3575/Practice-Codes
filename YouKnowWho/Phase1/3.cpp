#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sSize = s.size();
    vector<vector<int>> v(26);
    for (int i = 0; i < sSize; ++i) {
        v[s[i] - 'a'].push_back(i);
    }

    int low = 1, high = 1e6, ans = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int tSize = t.size();
        int cp = -1; 
        bool ok = true;
        for (char c : t) {
            if (v[c - 'a'].empty()) {
                ok = false;
                break;
            }
            auto it = upper_bound(v[c - 'a'].begin(), v[c - 'a'].end(), cp % sSize);
            if (it == v[c - 'a'].end()) {
                cp = (cp / sSize + 1) * sSize + v[c - 'a'][0];  
            } else {
                cp = cp / sSize * sSize + *it; 
            }
            if (cp >= mid * sSize) {
                ok = false;
                break;
            }
        }
        //cout << cp << endl;
        if (ok) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
