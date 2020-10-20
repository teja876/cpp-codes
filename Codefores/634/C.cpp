#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> cnt(n+1, 0);
        for(int i  = 0; i < n; i++){
            cnt[a[i]]++;
        }
        int m, d = 0;
        sort(cnt.begin(), cnt.end());
        m = cnt[n];
        for(int i = 0; i < n; i++){
            if(cnt[i] != 0)d++;
        }
        // for(int i = 0; i < n + 1; i++) cout<< cnt[i];
        // cout << m << d;
        if(n == 1) {cout << 0 << endl;continue;}
        int x;
        if(m > d){
            if(m - d > 1) x = d + 1;
            else x = d;
        }
        else x = m;
        cout << x << endl;
    }
}