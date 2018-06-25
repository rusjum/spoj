#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;
        if (x == 1 && y == 1) {
            cout << 1 << '\n';
        } else if (x == y || x - 2 == y) {
            int res = -1;
            if (x == y) {
                if (x % 2 == 0) {
                    res = x * 2;
                } else {
                    res = x * 2 - 1;
                }
            } else {
                if (x % 2 == 0) {
                    res = x * 2 - 2;
                } else {
                    res = x * 2 - 3;
                }
            }
            cout << res << '\n';
        } else {
            cout << "No Number\n";
        }
    }
}
