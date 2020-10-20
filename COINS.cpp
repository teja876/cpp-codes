#include<bits/stdc++.h>
#include<limits>
using namespace std;

vector<long long> a;

long long int func_byte(int n){
    if(n == 0) return 0;
    if(a[n] != 0) return a[n];
    // long long int x = func_byte(n/2);
    // long long int y = func_byte(n/3);
    // long long int z = func_byte(n/4);
    long long x = func_byte(n / 2) + func_byte(n/3) + func_byte(n/4);
    if(x  <= n){
        a[n] = n;
        return n;
    }
    else return x;
    // if()
}

int main(){
    int n;
    a.assign(1000000000, 0);
    // long long int INF = numeric_limits<long long int>::max();
    while(scanf("%d",&n)==1){
        
        long long int ans = func_byte(n);
        cout << ans << endl;
    }
    // while(cin >> n){
    //     a.assign(n + 1, 0);
    //     long long int ans = func_byte(n);
    //     cout << ans << endl;
    // }
}