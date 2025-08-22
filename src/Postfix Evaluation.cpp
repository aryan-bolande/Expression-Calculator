#include<bits/stdc++.h>
using namespace std;

int postfixEvaluation(string postfix) {
    stack<int> st;

    for(int i = 0; i < postfix.size(); i++) {
        char ch = postfix[i];

        if(ch == ' ') continue;
        else if(ch >= '0' && ch <= '9') {
            st.push(ch - '0');
        } else {
            int start = st.top(); st.pop();
            int end = st.top(); st.pop();
            int total = 0;
            switch (ch) {
            case '+': total = start + end;
                break;
            
            case '-': total = start - end;
                break;
            
            case '*': total = start * end;
                break;
            
            case '/': total = start / end;
                break;
            
            default:
                break;
            }
            st.push(total);
        }
    }
    return st.top();
}

int main() {
    string postfix;
    cin >> postfix;

    cout << postfixEvaluation(postfix) << endl;
    
    return 0;
}