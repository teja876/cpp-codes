#include<bits/stdc++.h>
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
        ll n, count = 0;
        cin >> n;
        vector<ll>a(n);
        rep(i, 0, n) cin >> a[i];
        for(ll i = 0; i < n-1; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i] > a[j]) count++;
            }
        }
        cout << count<< endl;
    }
}