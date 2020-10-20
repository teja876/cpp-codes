// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int precedence(char c){
    if(c == '+' || c == '-'){
        return 1;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '^') return 3;
    return 4;
}

bool ischar(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' || c == ')' ) return true;
    return false;
}

// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    // Your code here
    stack<char>stk;
    string res;
    unordered_map<char, int>mp;
    for(int i = 0; i < s.length(); i++){
        if(!ischar(s[i])) res.push_back(s[i]);
        else if(s[i] == '(') stk.push(s[i]);
        else if(ischar(s[i]) && s[i] != '(' && s[i] != ')'){
            if(stk.empty()) stk.push(s[i]);
            else if(precedence(s[i]) > precedence(stk.top() || stk.top() == '(')) stk.push(s[i]);
            else {
                while(!stk.empty() && stk.top() != '(' && precedence(s[i]) <= precedence(stk.top())){
                    res.push_back(stk.top());
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }
        else if(s[i] == ')') {
            while(stk.top() != '('){
                res.push_back(stk.top());
                stk.pop();
            }
            stk.pop();
        }
        
    }
    if(!stk.empty()) res.push_back(stk.top());
    return res;
}


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends