#include <iostream>
#include <math.h>
#include <algorithm>

void check_primes(long long a, long long b, char *are_primes) {
    if (a == 1) {
        are_primes[0] = 1; // handles 1 separately
    }
    for (long long int i = 2; i <= sqrt(b) + 1; ++i) {
        
        
            long long num = std::max(i * i, i * (a / i));
            for (; num <= b; num += i) {
                if (num >= a) {
                    are_primes[num - a] = 1;
                }
            }
        
    }
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        long long a, b;
        std::cin >> a >> b;
        char *are_primes = new char[b - a + 1]();
        check_primes(a, b, are_primes);
        for (int j = 0; j < b - a + 1; ++j) {
            if (are_primes[j] == 0) {
                std::cout << (a + j) << '\n';
            }
        }
        delete [] are_primes;
        if (i < n - 1)
            std::cout << '\n';
    }
    std::cout << std::flush;
}

