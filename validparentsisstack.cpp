#include <iostream>
#include <stack>
using namespace std;



// what exactly is the vaild parentesis 

// the one which is opening must be closed 
// Input: s = "()[]{}"
//  answer here will be true as in there will 

bool isValidParentheses(std::string s) {
    std::stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else if (ch == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        } else if (ch == '}' && !st.empty() && st.top() == '{') {
            st.pop();
        } else if (ch == ']' && !st.empty() && st.top() == '[') {
            st.pop();
        } else {
            return false;  
        }
    }

    return st.empty();  
}