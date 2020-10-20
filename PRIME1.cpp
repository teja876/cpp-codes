#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t, m, n;
    cin >> t;
    while(t--){
        cin >> m >> n;
        vector<bool> num(1000000001, false);
        num[1] = true;
        num[0] = true;
        for(long long int i = 2; i < 31622; i++){
            if(i > n) break;
            long long int inc;
            if(i >= m) inc = i;
            else inc = m / i;
            if(num[i] == true) continue;
            while(i * inc <= n){
                num[i * inc ] = true;
                inc++;
            
            }
        }
        for(long long int i = m; i <= n; i++){
            if(num[i] == false){
                cout << i  << endl;
            }
        }
    }
}