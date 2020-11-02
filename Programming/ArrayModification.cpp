#include<bits/stdc++.h>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n) for(ll i = f; i < n; i++)


int main(){
    int t;
    cin >> t;
    ll n,k;
    while(t--){
        cin >> n >> k;
        ll a[n];
        rep(i, 0, n) cin >> a[i];
        ll q = k / n;
        ll r = k % n;
        ll round = q % 3;
        ll arr1[n], arr2[n];
        rep(i, 0, n){
            if(i < n/2){
                arr1[i] = a[i] ^ a[n - i - 1];
                arr2[i] = a[n-i-1];
            }
            else{
                arr1[i] = a[n-i-1];
                arr2[i] = a[i] ^ a[n-1-i];
            }
            if(n % 2 != 0){
                arr1[n/2] = 0;
                arr2[n/2] = 0;
            }
        }
        ll ans[n];
        if(round == 0){
            rep(i, 0, n){
                if(i < r){
                    ans[i] = arr1[i];
                }
                else ans[i] = a[i];
            }
        }
        if(round == 1){
            rep(i, 0, n){
                if(i < r) ans[i] = arr2[i];
                else ans[i] = arr1[i];
            }
        }
        if(round == 2){
            rep(i, 0, n){
                if(i < r) ans[i] = a[i];
                else ans[i] = arr2[i];
            }
        }
        if(n % 2 != 0 && r-1 >= n / 2 ) ans[n/2] = 0;
        if(k/n>=1 && n % 2 != 0) ans[n/2] = 0;
        rep(i, 0, n) cout << ans[i] << " " ;
        cout << endl;
    }
}


// int main(){
//     int t;
//     cin >> t;
//     ll n,k;
//     while(t--){
//         cin >> n >> k;
//         ll a[n];
//         rep(i, 0, n) cin >> a[i];
//         rep(i, 0, k) a[i%n] = a[i%n] ^ a[n - i%n - 1];
//         rep(i, 0, n) cout << a[i] << " " ;
//         cout << endl;
//     }
// }
