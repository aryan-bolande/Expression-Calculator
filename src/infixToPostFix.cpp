#include<iostream>
#include<stack>
#include<string>
using namespace std;

#define SIZE 100

int precedence (char op){
    if (op == '+' || op == '-'){
        return 1;
    }
    if (op == '*' || op == '/'){
        return 2;
    }
    return 0;
}

string infixToPostfix(string infix){
    stack<char> s;
    string postfix = "";

    for(int i = 0; i < infix.length(); i++){
        char c = infix[i];

        if(isalnum(c))
        postfix += c;

        else if (c == '(')
        s.push('(');

        else if(c == ')'){
            while (s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }

        else{
            while (!s.empty() && precedence(c) <= precedence(s.top())){
                postfix += s.top();
                s.pop();
            } 
            s.push(c);
        }
    }
    while (!s.empty()){
        postfix += s.top();
        s.pop();
    } 
    return postfix;
}

int main(){
    string infix;
    cout << "Enter Infix Expression: " ;
    cin >> infix;
    cout << "Postfix Experssion: " << infixToPostfix(infix) << endl;
    return 0;
}
