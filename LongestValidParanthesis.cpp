
#include<bits/stdc++.h>
using namespace std;

int longestValidParanthesis(string s){
    stack<int> stk;
    int max_l = 0;
    for(int i = 0; i < s.length(); i++){
        if(!stk.empty() && s[stk.top()] == '(' && s[i] == ')') stk.pop();
        else {

            if(stk.empty()) max_l = i - 0;
            else max_l = max(max_l, i - stk.top() - 1);
            stk.push(i);

        }
    }
    if(stk.empty()) max_l = s.length();
    else max_l = max(max_l, (int)s.length() - stk.top() - 1);
    return max_l;
}

int main()
{
    
    string s; 
    cin >> s;
    cout << longestValidParanthesis(s);
    
}