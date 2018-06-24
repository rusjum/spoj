#include <iostream>
#include <vector>
#include <algorithm>

using std::max;
using std::cout;
using std::cin;
using std::vector;

vector<int> reverse_num(int n) {
    vector<int> reversed = {};
    while (n > 0) {
        reversed.push_back(n % 10);
        n /= 10;
    }
    return reversed;
}

vector<int> sum(vector<int> const & a, vector<int> const & b) {
    vector<int> res = {};
    int carr = 0;
    for (int i = 0; i < max(a.size(), b.size()); ++i) {
        int sum = (a.size() > i ? a[i] : 0) + (b.size() > i ? b[i] : 0) + carr;
        res.push_back(sum % 10);
        carr = sum / 10;
    }
    if (carr > 0) {
        res.push_back(carr);
    }
    return res;
}

vector<int> multiply(vector<int> const & a, vector<int> const & b) {
    vector<int> res = {};
    for (int i = 0; i < a.size(); ++i) {
        vector<int> temp = {};
        for (int j = 0; j < i; ++j) {
            temp.push_back(0);
        }
        int carr = 0; 
        for (auto& num : b) {
            int mul = num * a[i] + carr;
            temp.push_back(mul % 10);
            carr = mul / 10;
        }
        if (carr > 0) {
            temp.push_back(carr);
        }
        res = sum(res, temp);
    }
    return res;
}

vector<vector<int>> find_factorials(int up) {
    vector<vector<int>> factorials = {};
    factorials.push_back(reverse_num(1));
    for (int i = 1; i <= up; ++i) {
        factorials.push_back(multiply(factorials[i - 1], reverse_num(i)));
    }
    return factorials;
}

int main()
{
    vector<vector<int>> factorials = find_factorials(100);
    int t; 
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> factorial = factorials[n];
        for (vector<int>::reverse_iterator it = factorial.rbegin(); it != factorial.rend(); ++it) {
            cout << *it;
        } 
        cout << '\n';
    }
}
