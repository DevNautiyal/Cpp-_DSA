#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    string infix = "A+B*C", postfix = "";
    stack<char> st;

    for (char c : infix) {
        if (isalnum(c))
            postfix += c;
        else {
            while (!st.empty() &&
                   priority(st.top()) >= priority(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix: " << postfix;
    return 0;
}