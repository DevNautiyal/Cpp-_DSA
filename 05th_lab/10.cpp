#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string exp = "23*54*+";
    stack<int> st;

    for (char c : exp) {
        if (c >= '0' && c <= '9') {
            st.push(c - '0');
        } else {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            if (c == '+') st.push(a + b);
            else if (c == '-') st.push(a - b);
            else if (c == '*') st.push(a * b);
            else if (c == '/') st.push(a / b);
        }
    }

    cout << "Result: " << st.top();
    return 0;
}