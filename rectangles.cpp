#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j * i <= n; ++j) {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}