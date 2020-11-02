#include<bits/stdc++.h>
#include<limits>
#include<set>
using namespace std;

// define long long ll;
// define rep(i, f, n) for(ll i = f; i < n; i++)

int main(){
    int t, n, m;
    cin >>t;
    int c[100];
    while(t--){
        cin >> n >> m;
        int o[m], max = 0, fair = 0;
        // int c[n];
        for(int i = 0; i < n; i++) c[i] =0;
        // for(int i = 0; i < n; i++) cout <<c[i]<<" ";
        for(int i = 0; i < m; i++){
            cin >> o[i];
            
            c[o[i]-1]++;
            if(c[o[i]-1] > max){ 
                max = c[o[i]-1];
            }
            // count++;
            // cout << c[o[i]] << " " << max << endl;
            if(max > ((i/n)+1)){
                fair = 1;
            }
        }
        if(fair == 0){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}