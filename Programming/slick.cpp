#include<bits/stdc++.h>
using namespace std;
#define rep(i, j, n) for(int i = j; i < n; i++)
vector<vector <int> > a;
vector<vector<int>> vis;
vector<int> cv;
int c = 0;
void slick(int i, int j, int n, int m){
    vis[i][j] = 1;
    c++;
    // if(i>0 && vis[i-1][j-1] == 0) slick(i-1, j-1);
    if(j < m - 1 && vis[i][j+1] == 0 && a[i][j+1] == 1) slick(i, j+1, n, m);
    if(i < n - 1 && vis[i+1][j] == 0 && a[i+1][j] == 1) slick(i+1, j, n, m);
    if(i > 0 && vis[i-1][j] == 0 && a[i-1][j] == 1) slick(i-1, j, n, m);
    if(j > 0 && vis[i][j-1] == 0 && a[i][j-1] == 1) slick(i, j-1, n, m);
    // cv.push_back(c);
}
int count(int i, int j, int n, int m){
    // int c = 0;
    slick(i, j, n, m);
    int temp = c;
    c = 0;
    return temp;
}
int main()
{
    int n,m;
    while(1){
        cin >> n >> m;
        int s;
        if(n == 0 && m == 0) break;
        // vector<vector <int> > a(n);
        a.assign(n, vector<int>());
        rep(i, 0, n){
            rep(j, 0, m){
                cin >> s;
                a[i].push_back(s);
            }
        }
        // rep(i, 0, n){
        //     rep(j, 0, m){
        //         cout << a[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        // vector<vector<int>> vis;
        vis.assign(n, vector<int>(m,0));
        // rep(i, 0, n){
        //     rep(j, 0, m){
        //         cout << vis[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        cv.clear();
        
        rep(i, 0, n){
            rep(j, 0, m){
                if(vis[i][j] == 0 && a[i][j] == 1){
                    int ran = count(i, j, n, m);
                    cv.push_back(ran);
                    // cout << c << " h " << endl;
                }
            }
        }
        sort(cv.begin(), cv.end());
        // rep(i, 0, cv.size()) cout << cv[i] << " ";
        vector<int> ans(*max_element(cv.begin(), cv.end())+1, 0);
        rep(i, 0, cv.size()){
            ans[cv[i]]++;
        }
        cout << accumulate(ans.begin(), ans.end(), 0) << endl;
        rep(i, 0, ans.size()){
            if(ans[i] != 0) cout << i << " " << ans[i] << endl;
        }
        
    }
}