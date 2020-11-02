#include<bits/stdc++.h>
using namespace std;

int path(int s1, int s2, int f1, int f2){
    if(

int main(){
    int t, m, n;
    cin >> t;
    while(t--){
        cin  >> m >> n;
        char g[m][n];
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++) cin >> g[i][j];
        }
        for(int i = 0; i < n; i++){
            if(g[0][i] == '.') {
                count++;
                x.push_back(0);
                y.push_back(i);
            }
        }
        for(int i = 0; i < n; i++){
            if(g[m-1][i] == '.') {
                count++;
                x.push_back(m-1);
                y.push_back(i);
            }
        }
        for(int i = 1; i < m-1; i++){
            if(g[i][0] == '.') {
                count++;
                x.push_back(i);
                y.push_back(0);
            }
        }
        for(int i = 1; i < m-1; i++){
            if(g[i][n-1] == '.') {
                count++;
                x.push_back(i);
                y.push_back(n-1);
            }
        }
        int path_find;
        if(count == 2){
            path_find = path(x[0], y[0], x[1], y[1]);
        }
        else path_find = 0;
        if(path_find = 1) cout << "valid" << endl;
        else cout << "invalid" << endl;
    }
}