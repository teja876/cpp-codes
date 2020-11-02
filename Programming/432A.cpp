#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    int n,k, count = 0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i =0; i<n; i++){
        if(a[i] + k <= 5) count++;
    }
    cout << count/3;
}