#include<bits/stdc++.h>
#include<string>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n)          for(ll i = f; i < n; i++)
// #define max(x,y)              (x>y)?x:y
// #define min(x,y)              (x<y)?x:y
#define sv()                  int t; scanf("%d",&t); while(t--)
vector<vector<ll>> g;
vector<ll>vis;

void bfs(ll v){
    if(vis[v] == 1) return;
    vis[v] = 1;
    vector<ll>::iterator it;
    for(it = g[v].begin(); it != g[v].end(); it++){
        ll num = *it;
        bfs(num);
    }
    return;
}

int bfscall(ll n){
    ll count = 0;
    for(ll i = 0; i < n; i++){
        if(vis[i] == 0){
            count++;
            bfs(i);
        }
    }
    return count;
}

int main(){
    sv(){
        ll n; 
        ll e;
        cin >> n >> e;
        g.assign(n, vector<ll>());
        vis.assign(n, 0);
        for(ll i = 0; i < e; i++){
            ll a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        ll result = bfscall(n);
        cout << result << endl;
    }
}