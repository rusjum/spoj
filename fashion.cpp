#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int times;
    cin >> times;
    for (int t = 0; t < times; ++t) {
        int n;
        cin >> n;
        vector<int> men = {};
        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            men.push_back(m);
        }
        vector<int> women = {};
        for (int i = 0; i < n; ++i) {
            int w;
            cin >> w;
            women.push_back(w);
        }
        sort(men.begin(), men.end());
        sort(women.begin(), women.end());
        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += men[i] * women[i];
        }
        cout << total << endl;
    }
    return 0;
}