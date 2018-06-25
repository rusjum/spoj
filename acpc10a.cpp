#include <iostream>

using namespace std;

int main() {
    while (true) {
        int m1, m2, m3;
        cin >> m1 >> m2 >> m3;
        if (m1 == 0 && m2 == 0 && m3 == 0) {
            break;
        }

        int diff = m2 - m1;
        if (diff + m2 == m3) {
            cout << "AP " << m3 + diff << '\n';
        } else {
            int div = m2 / m1;
            cout << "GP " << m3 * div << '\n';
        }
    }
    return 0;
}
