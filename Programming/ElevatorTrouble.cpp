#include<bits/stdc++.h>
using namespace std;
#define ll long int

int main(){
    ll f,s,g,u,d;
    cin >> f>> s>> g >> u >> d;
    queue < ll > q;
    vector<ll> dist(f+1, 0);
    vector<int> vis(f+1, 0); 
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        if((q.front() + u <= f) && vis[q.front() + u] == 0){
            dist[q.front() + u] = dist[q.front()] + 1;
            vis[q.front() + u] = 1;
            q.push(q.front() + u);
        }
        if((q.front() - d >= 1) && vis[q.front() - d] == 0){
            dist[q.front() - d] = dist[q.front()] + 1;
            vis[q.front() -d] = 1;
            q.push(q.front() - d);
        }
        q.pop();
    }
    if(vis[g] == 1) cout << dist[g];
    else cout << "use the stairs";
    // cout << dist[g] << " " << vis[g];
}