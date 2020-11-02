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
        int n;
        cin >> n;
        vector<ll > a(n, 0);
        rep(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());
        int x, y, z, check = 0, d = n/4;
        if(a[d-1] == a[d]) {
            check = 1;
        }
        else {
            x = a[d];
        }
        if(a[d-1 + d] == a[d+d]){
            check = 1;
        }
        else {
            y = a[d + d];
        }
        if(a[d-1 + d + d] == a[d + d + d]){
            check = 1;
        }
        else {
            z = a[d + d + d];
        }
        if(check == 1) cout << -1 << endl;
        else cout << x << " " << y << " " << z << endl;
    }
}
