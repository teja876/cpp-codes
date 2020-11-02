#include<bits/stdc++.h>
using namespace std;
vector <vector<int >>  graph;
vector<int> visited;
void dfs(int v, int t){
    visited[v] = 1;
    // while(1){
        for(auto iter = graph[v].begin(); iter != graph[v].end(); iter++){
            int node = *iter;
            // if(node == t){
            //     return 1;
            // }
            
            if(visited[node] != 1) dfs(node, t);
        }
    // }
}

int main(){
    int n, t;
    cin >> n>> t;
    vector<int> a(n, 0);
    
    graph.assign(n+1, vector<int>());
    visited.assign(n+1, 0);
    for(int i = 1; i <= n-1; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n - 1; i++){
        graph[i].push_back(i+a[i]);
    }
    dfs(1, t);
    if(visited[t] == 1){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}