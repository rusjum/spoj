#include <iostream>

int zeros_in_fact(int num) {
    int div = 5;
    int res = 0;
    while (num / div > 0) {
        res += num / div;
        div *= 5;
    }
    return res;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        std::cout << zeros_in_fact(num) << std::endl;
    }
    return 0;
}
