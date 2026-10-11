#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "{a+(b*c)}";
    stack<char> st;
    bool balanced = true;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[')
            st.push(c);

        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) {
                balanced = false;
                break;
            }

            char x = st.top();
            st.pop();

            if ((c == ')' && x != '(') ||
                (c == '}' && x != '{') ||
                (c == ']' && x != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty())
        balanced = false;

    if (balanced)
        cout << "Balanced parentheses";
    else
        cout << "Not balanced";

    return 0;
}