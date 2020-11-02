#include<bits/stdc++.h>
// #include<vector>
#include<string>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n)          for(ll i = f; i < n; i++)
// #define max(x,y)              (x>y)?x:y
// #define min(x,y)              (x<y)?x:y
#define sv()                  int t; scanf("%d",&t); while(t--)

int main(){
    sv(){
        ll n, k, p;
        cin >> n >> k >> p;
        vector<ll > a(n, 0);
        vector<ll > b;
        rep(i, 0, n) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());
        int f, l, result;
        rep(i, 0, n){
            if(b[0] == a[i]) f = i;
            if(b[n-1] == a[i]) l = i;
        }
        ll m;
        if(k % 2 == 1){
            if(p == 0) m = a[l];
            else m =a[f];
        }
        else{
            if(p == 0) {
                m= a[1];
                for(int i =0; i < n; i++){
                    // if(i == 0) m = a[1];
                    // else if(i < n - 1) m = max(m, min(a[i-1], a[i + 1]));
                    // else m = max(m, a[n-2]);
                    // result = m;
                    m=max(m,min(a[i-1],a[i+1]));
                }
                m = max(m, a[n-2]);
            }
            if(p == 1) {
                m = a[1];
                for(int i =0; i < n; i++){
                    // if(i == 0) m = a[i+1];
                    // else if(i < n - 1) m = min(m, max(a[i-1], a[i + 1]));
                    // else m = min(m, a[n-2]);
                    // result = m;
                    m=min(m,max(a[i-1],a[i+1]));
                }
                m = min(m, a[n -2]);
            }
        }
        // cout << f << l << endl;  
        cout << m << endl;
    }

}