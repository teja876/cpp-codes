#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        int count= 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                count++;
            }
        }
        long long int result = count * (count -1) /2;
        cout << result + count << endl;
    }
}