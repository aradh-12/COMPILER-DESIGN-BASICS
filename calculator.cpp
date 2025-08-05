#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

// Operator precedence handler
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

//  Apply math operation to two values
int applyOperation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : throw runtime_error("Division by zero");
        default: return 0;
    }
}

// Core evaluator (parsing + execution)
int evaluate(const string& expr) {
    stack<int> values;
    stack<char> ops;
    int i = 0;

    while (i < expr.length()) {
        if (isspace(expr[i])) {
            i++;
            continue;
        }

        if (isdigit(expr[i])) {
            int val = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                val = val * 10 + (expr[i] - '0');
                i++;
            }
            values.push(val);
        }
        else if (expr[i] == '(') {
            ops.push(expr[i]);
            i++;
        }
        else if (expr[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.pop(); // Remove '('
            i++;
        }
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expr[i])) {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.push(expr[i]);
            i++;
        }
        else {
            throw runtime_error("Invalid character in expression");
        }
    }

    //  Final cleanup
    while (!ops.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOperation(a, b, op));
    }

    return values.top();
}

int main() {
    cout << "Enter an arithmetic expression: ";
    string expr;
    getline(cin, expr);

    try {
        int result = evaluate(expr);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

