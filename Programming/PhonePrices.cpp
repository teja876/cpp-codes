#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t, n, cnt;
    cin >> t;
    int max = numeric_limits<int>::max();
    while(t--){
        cnt = 0;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < 5; i++) a[i] = max;
        for(int i = 5; i < n+5; i++){
            cin >> a[i];
            // if(a[i] < a[i-1] && a[i] < a[i-2] && a[i] < a[i-3] && a[i] < a[i-4] && a[i] < a[i-5]){
            //     cnt++;
            //     cout << i << " ";
            // } 
        }
        for(int i = 5; i < n+5; i++){
            if(a[i] < a[i-1] && a[i] < a[i-2] && a[i] < a[i-3] && a[i] < a[i-4] && a[i] < a[i-5]){
                cnt++;
                // cout << i << " ";
            } 
        }
        // cout << a[11]<< " ";
        cout << cnt << endl;
    }
}
