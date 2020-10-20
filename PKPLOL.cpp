#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> d(10);
    d[0] = "abcdef";
    d[2] = "abdeg";
    d[3] = "abcdg";
    d[4] = "bcfg";
    d[5] = "acdfg";
    d[6] = "acdefg";
    d[7] = "abc";
    d[8] = "abcdefg";
    d[9] = "abcdfg";
    d[1] = "bc";
    int i = 1;
    while(t--){
        int n;
        cin >> n;
        cout << "Case " << i++ <<": "<< d[n] << endl;
    }
}