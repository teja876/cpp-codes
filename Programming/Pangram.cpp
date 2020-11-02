#include<bits/stdc++.h>
#include<limits>
#include<set>
using namespace std;

#define ll long long
#define rep(i, f, n) for(ll i = f; i < n; i++)

int main(){
    int n, check = 0;
    cin >> n;
    string s;
    cin >> s;
    int a[26];
    rep(i, 0, 26) a[i] = 0;
    // boost::algorithm::to_lower(str);
    for (int i = 0; i < n; i++)
    {
        if(s[i] - 97 >= 0) a[s[i] - 97]++;
        else
        {
            a[s[i] - 65]++;
        }
        
    }
    rep(i, 0, 26){
        if(a[i] == 0) check = 1;
    }
    if(check == 1) cout << "NO";
    else
    {
        cout << "YES";
    }
    
}