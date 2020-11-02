#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, f, l) for(ll i = f; i < l; i++)
vector<ll> vis;
vector<vector<ll>> g;
ll parent = 1;
bool cycle(ll v){
    vis[v] = 1;
    for(auto i = g[v].begin(); i != g[v].end(); i++){
        if(vis[*i] == 0){
            parent = v;
            if(cycle(*i) == true)
            return true;
        }
        else if(*i != parent) return true;
    }
    return false;
}



int main(){
    ll n, m;
    cin >> n >> m;
    vis.assign(n+1, 0);
    
    g.assign(n+1, vector<ll>());
    ll a, b;
    rep(i, 0, m){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool detect = false;
    if(cycle(1)) detect = true;
    // cout << *g.begin();
    int dis = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i] == 0)  dis = 1;
    }
    // cout << detect << " " << dis;
    if(detect == false && dis == 0) cout << "YES";
    else cout << "NO";
}
