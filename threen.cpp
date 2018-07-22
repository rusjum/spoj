#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int t = 0; t < n; ++t) {
        int a;
        long long b;
        cin >> a >> b;
        int exp = b % 4;
        if (b != 0 && exp == 0) exp = 4;
        int res = pow(a % 10, exp);
        cout << res % 10 << endl;


    }
    return 0;
}