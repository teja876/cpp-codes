#include<bits/stdc++.h>
#include<limits>
#include<set>
using namespace std;

#define ll long long
#define rep(i, f, n) for(ll i = f; i < n; i++)

int main(){
    ll a,b, pa, pb, np;
    int t, n, m;
    cin >> t;
    
    while(t--){
        cin >> m;
        cin >> n >> a >> b;
    if(n == 1){
        cout << "YES" << endl;
    }else
    {
        if(a == b){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    m--;
    // pa = a;pb = b;
    // np = n;
    while(m--){
        pa = a; 
        pb = b;
        np = n;
        cin >> n >> a >> b;
        
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        else
        {
            if(a == b){
                cout << "YES" << endl;
                continue;
            }
            else
            {
                if(np == 1){
                    if(pa == pb){
                        cout << "NO" << endl;
                        continue;
                    }
                    if(pa < pb){
                        if(a >= pb && b >= pb){
                            cout << "NO" << endl;
                            continue;
                        }
                        else
                        {
                            cout << "YES" << endl;
                            continue;
                        }
                        
                    }
                    else
                    {
                        if(a >= pa && b >= pa){
                            cout << "NO" << endl;
                            continue;
                        }
                        else
                        {
                            cout << "YES" << endl;
                            continue;
                        }
                    }
                    
                }
                if(np == 2){
                    cout << "NO" << endl;
                    continue;
                }
            }
            
        }
        
    }}
}