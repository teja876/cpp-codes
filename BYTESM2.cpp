#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> m;

int main(){
    int t;
    cin >> t;
    int h, w;
    while (t--)
    {
        cin >> h >> w;
        m.assign(h, vector<int>(w));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> m[i][j];
            }
        }
        for(int i = 1; i < h; i++){
            for(int j = 0; j < w; j++){
                if(j == 0){
                    m[i][j] = max(m[i][j] + m[i - 1][j], m[i][j] + m[i - 1][j + 1]);
                    // cout << m[i][j] << " ";
                }
                else if(j == w - 1){
                    m[i][j] = max(m[i][j] + m[i - 1][j], m[i][j] + m[i - 1][j - 1]);
                    
                    // cout << m[i][j]<< " ";
                }
                else{
                m[i][j] = max(m[i][j] + m[i - 1][j - 1], max(m[i][j] + m[i - 1][j + 1], m[i][j] + m[i - 1][j]));
                    // cout << m[i][j] << endl;
                }
            }
        }
        
        // for(int i = 0; i < h; i++){
        //     for(int j = 0; j < w; j++){
        //         cout << m[i][j] << " ";
        //     }
        //     cout<<endl;
        // }
        int l = m[h - 1][0];
        for(int i  = 1; i < w; i++) l = max(l, m[h - 1][i]);
        cout << l << endl;
    }
    
}