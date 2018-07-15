#include <iostream>
#include <unordered_map>

using namespace std;

long long get_res(int n, unordered_map<int, long long> &mem) {
    if (n == 0) return 0;

    if (mem.find(n) == mem.end()) {
        long long res = get_res(n / 2, mem) + get_res(n / 3, mem) + get_res(n / 4, mem);
        res = max(res, (long long) n);
        mem[n] = res;
    }
    return mem.find(n)->second;
}

int main() {

    unordered_map<int, long long> mem = {};
    int n;

    while (cin >> n) {
        long long res = get_res(n, mem);

        cout << res << endl;
    }
    return 0;
}