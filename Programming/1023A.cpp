#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m, check = 0, i=0,j, nostar = 1;
    string s,t;
    cin >> n >> m >> s >> t;
    for(i; i < n; i++){
        if(s[i] == '*'){
            nostar = 0;
        }
    }
    i = 0;
    if(nostar == 1 && n == m){
        for(i; i < n; i++){
        if(s[i] != t[i]){
            // cout << 1;
            check = 1;
            break;
        }
    }
    
    }
    if(nostar == 1 && n != m){
        check = 1;
        // cout << 4;
    }
    // else {check = 1;
    // cout << 4;
    // }
    i = 0, j = m-1;
    if(nostar == 0){
        while(s[i] != '*'){
        if(s[i] != t[i]){
            check = 1;
            // cout << 2;
            break;
        }
        i++;
    }
    i = n-1, j = m -1;
    if(check == 0){
        while(s[i] != '*'){
            if(s[i] != t[j]){
                check = 1;
                // cout << 3;
                break;
            }
            i--,j--;
        }
    }}
    if(m < n-1) check = 1;
    if(check == 0) cout << "YES";
    else cout << "NO";
}