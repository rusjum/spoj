#include <iostream> 

long long reverse(int n) {
    long long res = 0;
    while (n > 0) {
        res *= 10;
        res += (n % 10);
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;
        std::cout << reverse(reverse(a) + reverse(b)) << std::endl;

    }
    return 0;
}
