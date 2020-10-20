#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;
        vector<long long>a(n);
        for(int i = 0; i <n ; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        long long sum = 0, i = 0, cnt = 0;
        while(sum <= x){
            sum = ((sum * i) + a[i] )/ i + 1;
            if(sum <= x){
                i++;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}