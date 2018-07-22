#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool works(const vector<int> & positions, int min_diff, int t) {
    int prev = positions[0];
    t--;
    for (int i = 1; i < positions.size() && t > 0; ++i) {
        if (positions[i] - prev >= min_diff) {
            t--;
            prev = positions[i];
        }
    } 
    return t == 0;
}

int main() {
    
    int times;
    cin >> times;
    for (int t = 0; t < times; ++t) {
        int n, c;
        cin >> n >> c;
        vector<int> positions = {};
        for (int i = 0; i < n; ++i) {
            int pos;
            cin >> pos;
            positions.push_back(pos);
        }
        sort(positions.begin(), positions.end());
        int l = 0; 
        int r = positions[n - 1];
        int sol = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (works(positions, mid, c)) {
                sol = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << sol << endl;
    }

    return 0;
}
