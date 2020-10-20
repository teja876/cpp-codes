#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> m;

int edit(int i, int j, string a, string b){
    // cout << 0;
    if(j >= m[0].size() || i >= m.size()){
        return 0;
    }
    if(m[i][j] != -1) return m[i][j];
    if(a[i] == b[j]){
        m[i][j] = 1 + edit(i + 1,  j + 1, a, b);
        return m[i][j];
    }
    m[i][j] = max(edit(i + 1, j, a, b), edit(i, j+ 1, a, b));
    return m[i][j];
}

// int lcs( string X, string Y, int m, int n )  
// {  
//     int L[m + 1][n + 1];  
//     int i, j;  
      
//     /* Following steps build L[m+1][n+1] in  
//        bottom up fashion. Note that L[i][j]  
//        contains length of LCS of X[0..i-1] 
//        and Y[0..j-1] */
//     for (i = 0; i <= m; i++)  
//     {  
//         for (j = 0; j <= n; j++)  
//         {  
//         if (i == 0 || j == 0)  
//             L[i][j] = 0;  
      
//         else if (X[i - 1] == Y[j - 1])  
//             L[i][j] = L[i - 1][j - 1] + 1;  
      
//         else
//             L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
//         }  
//     }  
          
//     /* L[m][n] contains length of LCS  
//     for X[0..n-1] and Y[0..m-1] */
//     return L[m][n];  
// }

int main(){
    int t;
    cin >>t;
    string a, b;
    while(t--){
        cin >> a >> b;
        m.assign(a.length(), vector<int>(b.length(), -1));
        int dedit = edit(0, 0, a, b);
        cout << dedit << endl;
        // int len = (a.length() > b.length()) ? a.length() : b.length();
        // cout << len - dedit << endl;
        // for(int i = 0; i < a.length(); i++){
        //     for(int j = 0; j < b.length(); j++){
        //         cout << m[i][j];
        //     }
        //     cout << endl;
        // }
    }
}