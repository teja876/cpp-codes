#include<bits/stdc++.h>
#include<string>
// #include<limits>
// #include<set>
// #include<map>
using namespace std;

#define ll long long
// #define rep(i, f, n)          for(ll i = f; i < n; i++)
// #define max(x,y)              (x>y)?x:y
// #define min(x,y)              (x<y)?x:y
// #define sv()                  int t; scanf("%d",&t); while(t--)

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        // string s;
        cin >> s;
        int zeros = 0;
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] - '0' == 0){
                zeros++;
            }
            else break;
        }
        string ns;
        ns = s[0];
        for(int i = 1; i < s.length() - zeros; i++) ns.push_back(s[i]);
        ll num = stoi(ns);
        s.clear();
        ns.clear();     
        int two = 0;
        bool ch = 0;
        if(num == 1 && zeros >= 1) ch = 1; 
        // cout << ns << endl;
        while(num % 2 == 0 && num / 2 != 0){
            num = num /2;
            two++;
        }
        if(num == 1){
            if(zeros >= two){
                ch = 1;
            }
        }
        if(ch == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        // cout << zeros << " " << two << " " << ch<< " " << num<<endl;
    }
}