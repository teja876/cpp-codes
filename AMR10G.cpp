#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t, k, n;
    cin >> t;
    while(t--){
        cin >> k >> n;
        vector<long long int > a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int a = min(1,2);
        sort(a.begin(), a.end());
        long long int temp = 0;
        for(int i = 0; i < n-k; i++){
            temp = min(temp, abs(a[i] - a[i + k]));
        }
        cout << temp << endl;
    }
}