#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
int parent = 0;

void dfs(int& v, int& dis){
    vector<int>::iterator it;
    for(it = g[v].begin(); it != g[v].end(); it++){
        if(*it != parent) {
            parent = v;
            dis++;
            dfs(*it, dis);
        }
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int nn;
    int a, b, dis= 0;
    g.assign(n+1, vector<int>());
    while(nn--){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(a, dis);
    dfs(a, dis);
    cout << dis;
}