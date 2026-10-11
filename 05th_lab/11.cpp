#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    string infix = "A+B*C";
    string rev = infix, result = "";
    stack<char> st;

    reverse(rev.begin(), rev.end());

    for (char &c : rev) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    for (char c : rev) {
        if (isalnum(c))
            result += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else {
            while (!st.empty() && st.top() != '(' &&
                   priority(st.top()) > priority(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());

    cout << "Prefix: " << result;
    return 0;
}