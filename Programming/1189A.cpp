#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i<n; i++){
        if(s[i] == '0'){
            a++;
        }
        else b++;
    }
    // cout<<a<<b;
    if(a!=b){
        cout << 1<< endl;
        cout << s;
    }
    else{
        cout << 2 << endl;
        cout << s[0] << " ";
        for(int i = 1; i < n; i++) cout << s[i];
    }
}