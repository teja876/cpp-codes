#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         long long product = 1, ans = 0;
//         for(int i = 0; i < n; i++){
//             product = 1;
//             for(int j = i; j< n; j++){
//                 product *= a[j];
//                 if(!((product % 2 == 0) && (product % 4 != 0)))
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
// }

int main(){
    int k;
    cin >> k;
    vector<long long> a;
    vector<long long>t;
    while(k--){
        int n;
        cin >> n;
        a.assign(n, 0);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            a[i] = ((a[i] % 4) == 0) ? 4 : a[i] % 4;
            if(a[i] == 2) t.push_back(i);
        }
        // for(int i = 0; i < t.size(); i++) cout << t[i];
        // cout << t.size();
        // vector<long long> al, ar;
        long long l = 0, r, m = 0;
        long long result = 0;
        for(long long i = 0; i <= t.size() - 1; i++){
            if(i > 0) l = t[i - 1] + 1;
            if(i == t.size() - 1) r = n;
            else r = t[i + 1];
            
            for(long long j = l; j < t[i]; j++){
                // cout << i << " ";
                // cout << l + 1 << " " << t[i];
                l = (a[j] == 4) ? j + 1 : l;
                // cout << i << " ";
            }
            // cout << result <<" ";
            for(long long j = t[i]; j < r; j++){
                // cout <<  i<< " ";    
                m = (a[j] == 4) ? j - 1 : r - 1;
            }
            result = result + (t[i] - l + 1) * (m - t[i] + 1);
            // cout << l<< " "<< m << " ";
            // cout << result << " ";
        }
        a.clear();t.clear();
        cout << ((n * (n + 1)) / 2) - result << endl;
    }
}