#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

string add(const string & num, int n) {
    string res = "";
    int carr = 1;
    for (int i = num.length() - 1; i >= 0; --i) {
        int cur = num[i] - '0' + carr;
        if (cur == 10) {
            cur = 0;
        } else {
            carr = 0;
        }
        res += (char) (cur + '0');
    }
    if (carr > 0) {
        res += (char)(carr + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

bool is_greater_right_part(const string & num) {

    int j = num.length() / 2;
    int i = j - 1;
    if (num.length() % 2 == 1) j++;
    bool equal = true;
    for (; j < num.length(); --i, ++j) {
        if (num[j] < num[i]) return false;
        if (num[j] > num[i]) return true;
    }
    return equal;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    string num;
    cin >> num;
    int len = num.length() / 2;
    if (num == "9") {
        cout << "11" << endl;
        continue;
    }
    if (num.length() % 2 == 1) {
        len += 1;
    }
        
    string res = num.substr(0, len);
    int init_len = res.length();
    if (is_greater_right_part(num))
        res = add(res, 1);
//    cout << res << endl;
    string cp;
    if (len * 2 > num.length() || init_len < res.length()) {
        cp = string(res.substr(0, res.length() - 1));
    }
    else {
        cp = string(res);
    }
    reverse(cp.begin(), cp.end());
    if (len != num.length())
        res += cp;
    cout << res << endl;
    }
    return 0;
}
