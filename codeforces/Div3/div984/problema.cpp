#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to get elements of each layer in a clockwise manner and count "1543" occurrences
int count1543InLayers(const vector<string>& carpet, int n, int m) {
    int count = 0;
    string target = "1543";
    
    // Number of layers is determined by the smaller dimension, divided by 2
    for (int layer = 0; layer < min(n, m) / 2; ++layer) {
        string layerStr;

        // Traverse top row of the current layer (left to right)
        for (int i = layer; i < m - layer; ++i)
            layerStr += carpet[layer][i];

        // Traverse right column of the current layer (top to bottom)
        for (int i = layer + 1; i < n - layer; ++i)
            layerStr += carpet[i][m - layer - 1];

        // Traverse bottom row of the current layer (right to left)
        if (n - layer - 1 > layer) {
            for (int i = m - layer - 2; i >= layer; --i)
                layerStr += carpet[n - layer - 1][i];
        }

        // Traverse left column of the current layer (bottom to top)
        if (m - layer - 1 > layer) {
            for (int i = n - layer - 2; i > layer; --i)
                layerStr += carpet[i][layer];
        }

        // Count occurrences of "1543" in the collected layer string
        for (size_t pos = 0; (pos = layerStr.find(target, pos)) != string::npos; ++pos) {
            ++count;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }

        // Count occurrences of "1543" in all layers of the current carpet
        int result = count1543InLayers(carpet, n, m);
        cout << result << endl;
    }

    return 0;
}
