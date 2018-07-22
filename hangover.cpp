#include <iostream>

using namespace std;

int main() {

    while (true) {
        double n;
        cin >> n;
        if (n == 0.0) break;

    
    double res = 0.0;
    double one = 1.0;
    int i = 2;
    while (res < n) {
        res += one / i++;
    }
    cout << i - 2 << " card(s)" << endl;
    }
    return 0;
}
