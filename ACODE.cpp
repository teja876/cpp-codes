#include<bits/stdc++.h>
using namespace std;

vector<int> a;

long long decode(string s, int i){
    if(i == s.length()) return 1;
    if(i > s.length()) return 0;
    if(a[i] != -1) return a[i];
    long long x, y;
    if(s[i] == '0'){
        return 0;
    }
    else if(stoi(s.substr(i, 2)) > 26){
        x = decode(s, i + 1);
        y  =0;
    }
    else {
        x = decode(s, i + 1);
        y = decode(s, i + 2);
    }
    a[i] = x + y;
    return x + y;

}

int main(){
    string s;
    while(1){
        cin >> s;
        a.assign(s.length(), -1);
        if(s[0] == '0' && s.length() == 1) break;
        int i = 0;
        long long ans = decode(s, i);
        cout << ans << endl;
    }
}