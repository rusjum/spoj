#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long total = 0;
        int n = 0;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            long long val;
            cin >> val;
            total += val;
            total %= n;
        }
        if (total % n == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
