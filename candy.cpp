#include <iostream>
#include <vector>
using namespace std;

int main() {

    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        int total = 0;
        vector<int> nums = {};
        for (int i = 0; i < n; ++i) {
            int t;
            cin >> t;
            nums.push_back(t);
            total += t;
        }
        if (total % n > 0) {
            cout << -1 << endl;
        } else {

            int avg = total / n;
            int moves = 0;
            for (auto& num : nums) {
                if (num > avg) {
                    moves += num - avg;
                }
            }
            cout << moves << endl;
        }
    }
}