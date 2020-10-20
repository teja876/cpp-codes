#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        // cout << ((((b - a) % b) < 0) ? b + ((b - a) % b) : ((b - a) % b)) << endl;
        cout << a % b << endl;
    }
}