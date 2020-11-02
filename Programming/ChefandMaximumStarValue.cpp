#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, f, l) for(ll i = f; i < l; i++)
int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int a[n];
        rep(i, 0, n) cin >> a[i];
        int count, max = 0;
        rep(i, 0, n){
            count = 0;
            rep(j, 0, i){
                if(a[j] % a[i] == 0){
                    count++;
                }
            }
            if(max < count) max = count;
        }
        cout << max << endl;
    }
}
