#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a>> b;
        string temp;
        int i = 0;
        while(i < n){
            temp.push_back('a' + i % b);
            i++;
        }
        cout << temp << endl;
    }
}