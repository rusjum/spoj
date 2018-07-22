#include <iostream>
#include <string>

using namespace std;

bool valid(int el) {
    return el > 0 && el < 27;
}

int main() {

    while (true) {
        string line;
        cin >> line;
        if (line == "0") break;

        long long  *mem = new long long[line.length() + 1]();
        mem[0] = 1;
        for (int i = 0; i < line.length(); ++i) {
            long long res = 0;
                if (valid(line[i] - '0') && mem[i] != 0) {
                res = mem[i];
            }
            if (i > 0 && line[i - 1] != '0' && valid((line[i - 1] - '0') * 10 +  line[i] - '0') 
                    && mem[i - 1] != 0) {
                res += mem[i - 1];
            }
            mem[i + 1] = res;
        }
        cout << mem[line.length()] << endl;
        delete [] mem;
    }
    return 0;
}
