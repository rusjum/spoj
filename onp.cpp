#include <iostream>
#include <stack> 
#include <string>
#include <algorithm>

using std::reverse;
using std::cin;
using std::cout;
using std::string;
using std::stack;

bool is_operator(char const & c) {
    return c == '*' ||
        c == '/' || 
        c == '+' ||
        c == '-' || 
        c == '^';
}

int main()
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string expr;
        cin >> expr;
        stack<string> operands = {};
        stack<string> operators = {};
        for (auto& c : expr) {
            if (c == ')') {
                string new_operand = operators.top();
                operators.pop();
                new_operand = operands.top() + new_operand;
                operands.pop();
                new_operand = operands.top() + new_operand;
                operands.pop();
                operands.push(new_operand);
            } else if (is_operator(c)) {
                operators.push(string(1, c));
            } else if (c != '(') {
                operands.push(string(1, c));
            }
        }
        cout << operands.top() << '\n';
        operands.pop();
    }
}
