#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        long long result = 0;
        // vector<long long>::iterator it;
        // for(it = a.begin(); it != a.end();  it++){
        //     long long f = *it;
        //     result = (result + f) % 1000000007;
        // }
        long long sub = 0;
        for(int i = 0; i < n; i++){
            if(sub >= a[i]) break;
            result = (((result + a[i]) % 1000000007) - sub) % 1000000007;
            sub++;
            // cout << 0;
        }
        cout << result << endl;
    }
}