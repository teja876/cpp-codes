#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i =0;
        int covid = 0;
        while(i < n){
            if(a[i] == 1){
                for(int j = i + 1; j < i + 6; j++){
                    if(a[j] == 1){
                        covid = 1;
                        break;
                    }
                }
                if(covid == 1){
                    break;
                }
                else{
                    i = i + 6;
                }
            }
            else i++;
        }
        string ans = (covid)? "NO" : "YES";
        cout << ans << endl;
    }
}