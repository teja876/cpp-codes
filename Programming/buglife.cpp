#include<bits/stdc++.h>
using namespace std;
vector<bool> visited;
vector<int> color;
vector< vector<int> > al;


int bfs(int v){

    // visited[v] = true;
    // for(int i = al[v].begin(); i < al[v].end(); i++){
    //     if(visited[al[v][i]] == true){
    //         if(color[v] != color[al[v][i]] && color[al[v][i]] != 999){
    //             ass = 1;
    //             return ass;
    //         }
    //         else continue;
    //     }
    //     else{
    //         visited[al[v][i]] = true;
    //         if(color[v] == 0) color[al[v][i]] = 1;
    //         else color[al[v][i]] = 0;
    //         q.push(al[v][i]);
    //     }
    // } 
    // while(!q.empty()){
    //     int num = q.front();
    //     q.pop();
    //     bfs(num);
    // }
    queue<int> q;
    visited[v] = true;
    q.push(v);
    color[v] = 0;
    int ass = 0;

    while(!q.empty()){
        int num = q.front();
        // cout << num << " " << color[num]<< endl;
        q.pop();

        for(auto i = al[num].begin(); i != al[num].end(); i++){
            if(visited[*i] == false){
                visited[*i] = true;
                q.push(*i);
                if(color[num] == 0) color[*i] = 1;
                else color[*i] = 0;
            }
            else{
                if(color[num] == color[*i]){
                    ass = 1;
                }
            }
        }

    }
    return ass;

}

int main()
{
    int t;
    cin>>t;
    int n = t;
    while(t--){
        int V, E, u, v, ass= 0;
        cin >> V >> E;
        // vector<vector<pair<int, int>>> al(V+1, vector<pair<int, int>>());
        // vector< vector<int> > al(V+1, vector<int>);
        // vector<bool> visited(V+1, false);
        // vector<int> color(V+1, 999);
        visited.assign(V+1, false);
        color.assign(V+1, 9);
        al.assign(V+1, vector<int>());
        for(int edges=0; edges<E; edges++){
            cin>>u>>v;
            al[u].push_back(v);
            al[v].push_back(u);
        }
        for(int i=1; i<=V; i++){
            if(visited[i] == false){
                ass = bfs(i);
                if(ass == 1) break;
            }
        }
        cout << "Scenario #" << n-t << ":" << endl; 
        if(ass == 1){
            cout<< "Suspicious bugs found!" << endl;
        }
        else cout << "No suspicious bugs found!" << endl;

        // for(int i = 1; i <= V; i++){
        //     cout << i << "-";
        //     for(auto j = al[i].begin(); j != al[i].end(); j++){
        //         cout << *j <<" ";
        //     }
        //     cout << endl;
        // }
    }
}