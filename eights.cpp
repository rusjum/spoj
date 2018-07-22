#include <iostream>

using namespace std;

int main() {

    int nums[] =  {192, 442, 692, 942};

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        n--;
        int rem = n % 4;
        long long times = n / 4;
        cout << times * 1000 + nums[rem] << endl;
    }
    return 0;
}
