#include<bits/stdc++.h>
#include<limits>
#include<set>
using namespace std;

#define ll long long
#define rep(i, f, n) for(ll i = f; i < n; i++)

int main(){
    int n, m, c = 1,a, step = 0, rem, j = 0;
    cin >> n>> m;
    a = n;
    while(a * 2 < m){
        a = a * 2;
        c++;
        // cout << c;
    }
    a = a * 2;
    int d = a - m;
    // cout << d;
    int count =c;
    // for(int i = c; i >0; i--){
    //     rem = d % 2;
    //     d = d/2;
    //     step = step + rem;
    //     cout << d << step;
    //     j++;
    //     // cout <<6;
    //     if(d = 1){
    //         break;
    //     }
    // }
    while(count--){
        rem = d % 2;
        d = d/2;
        step = step + rem;
        // cout << d << step;
        j++;
        // cout <<6;
        if(d == 1){
            break;
        }
    }
    // cout << d;
    // cout << j;
    step = step + d + c;
    if(n >= m){
        step = n - m;
    }
    cout << step;
}