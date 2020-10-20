#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        if(i % 3 == 0) s.push_back('a');
        else if (i % 3 == 1) 
        {
            s.push_back('b');
        }
        else s.push_back('c');
        
    }
    cout << s;
}