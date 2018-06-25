#include <iostream>

using namespace std;

int main() {

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        long long sum = 0;

        for (int i = 1; i <= n; ++i) {
            int diff = n - i + 1;
            sum += diff * diff;
        }
        cout << sum << '\n';
    }

    return 0;
}
