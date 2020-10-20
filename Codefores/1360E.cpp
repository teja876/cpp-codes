#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> mat, int i, int j, vector<vector<int>> boolmat, int n){
    if(boolmat[i][j] == 1) return true;
    if(boolmat[i][j] == 2) return false;
    if(mat[i][j] == 0) return false;
    if(i == n - 1 || j == n - 1) {
        boolmat[i][j] = 1;
        return true;
    }
    if(check(mat, i, j+ 1, boolmat, n) || check(mat, i + 1, j, boolmat, n)){
        boolmat[i][j] = 1;
        return true;
    }
    else boolmat[i][j] = 2;
    return false;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<vector<int>> mat(n, vector<int>()), boolmat(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < n; j++){
                mat[i].push_back(s[j] - '0');
            }
        }
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << mat[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        bool flag = false;
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - 1; j++){
                if(mat[i][j] == 1 && boolmat[i][j] == 0){
                    if(!check(mat, i, j, boolmat, n)) {
                        flag = true;
                        break;
                    }
                }
                if(boolmat[i][j] == 2){
                    flag = true;
                    break;
                }
                
            }
            if(flag) break;
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}