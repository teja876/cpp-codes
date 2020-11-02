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
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int a[n];
        int b, c;
        int aa[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
            aa[i] = a[i];
        }
        // aa = a;
        sort(a, a+n);
        b = a[0];
        c = a[n-1];
        int ch = 0;
        for(int i = 0; i < n; i++){
            if(b == aa[i]){
                ch = 1;
                break;
            }
            else if(c == aa[i]){
                ch = 2;
                break;
            }
        }
        if(ch == 1) cout << a[0] << " " << a[n-1] << endl;
        else cout << a[n-1] << " " << a[0] << endl;
    }
}