#include<bits/stdc++.h>
#include<string>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n)          for(ll i = f; i < n; i++)
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define sv()                  int t; scanf("%d",&t); while(t--)

int main(){
    sv(){
        ll n, count = 0,k;
        cin >> n >> k;
        vector<ll > a(n, 0);
        rep(i, 0, n) cin >> a[i];
        vector<ll> b;
        vector<ll> c(n, 0);
        b = a;
        sort(b.begin(), b.end());
        for(ll i = 0; i < n-1; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i] > a[j]) count++;
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < i; j++){
                if(b[i] > b[j]) c[i]++;
            }
        }
        // rep(i, 0, n){
        //     count = count + ((k-1) * k * (i))/2;
        // }
        
        count *= k;
        // cout << count << endl;
        for(ll i = 0; i < n; i++){
            count = count + (k-1) * k / 2 * c[i];
        }
        // count = count * k + ((k-1) * k * (n-1) * n)/4;
        cout << count << endl;
    }
}