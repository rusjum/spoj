#include <iostream>
#include <string>

using namespace std;

char get_by_row_and_col(string const &line, int row, int col, int cols) {
    int idx = row * cols;
    if (row % 2 == 0) {
        idx += col;
    } else {
        idx += (cols - col) - 1;
    }

    return line[idx];
}

int main() {
    while (true) {

        int cols;
        cin >> cols;
        if (cols == 0) break;
        string line;
        cin >> line;
        int rows = line.length() / cols;
        string res{};
        for (int i = 0; i < cols; ++i) {
            for (int j = 0; j < rows; ++j) {
                res += get_by_row_and_col(line, j, i, cols);
            }
        }


        cout << res << endl;
    }
    return 0;
}