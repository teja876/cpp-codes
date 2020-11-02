#include<bits/stdc++.h>
using namespace std;
int t;
int nth(int n){
    if(n == 2*t-1){
        return 2*t - 1;
    }
    return n * nth(n+1);
}
int main(){
    int n;
    cin >> n;
    t = n;
    cout << nth(n);
}