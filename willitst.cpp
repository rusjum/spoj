#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    unordered_set<long long> map = {};
    long long n;
    cin >> n;
    while (n > 1 && map.find(n) == map.end()) {
        map.insert(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 3;
        }
    } 
    if (n == 1) {
        cout << "TAK";
    } else {
        cout << "NIE";
    }
    cout << endl;
    return 0;
}
