#include<bits/stdc++.h>
#include<limits>
#include<set>
#define ll long long 
// vector<vector<pair<ll, ll>>> al;
using namespace std;
vector<vector< pair<ll, ll>>> al;
vector<ll> key;
vector<ll> parent;
set <ll> mset;
ll mind(ll n){
    ll INF = numeric_limits<ll>::max();
    ll min = INF,ind;
    for(ll i = 0; i < n; i++){
        if(mset.count(i) != 1 && key[i] <= min){
            min = key[i];
            ind = i;
        }
    }
    return ind;
}
void mst(ll n){
    // set <ll> mset;
    ll INF = numeric_limits<ll>::max();
    key.assign(n, INF);
    parent.resize(n);
    key[0] = 0;
    parent[0] = -1;
    mset.insert(0);
    ll minind = 0;
    for(ll count = 0; count < n-1; count++)
    {
        for(auto j = mset.begin(); j != mset.end(); j++){
            for(auto i = al[(*j)].begin(); i != al[(*j)].end(); i++){
                ll weight = (*i).first;
                ll node = (*i).second;
                if(mset.count(node) == 0 && key[node] > weight){
                    key[node] = weight;
                    parent[node] = minind;
                }
            }
        }
        
        ll minind = mind(n);
        mset.insert(minind);
    }
    for(ll check = 0; check < n; check++){
        if(key[check] == INF) key[check] = 0;
    }
    
}
int main(){
    ll m, n, a, b, w;
    cin >> n >> m;
    al.assign(n, vector<pair<ll, ll>>());
    for(ll i = 0; i < m; i++){
        cin >> a >> b >> w;
        a--;b--;
        al[a].push_back(make_pair(w, b));
        al[b].push_back(make_pair(w, a));
    }
    // for(long long int i = 0; i < n; i++){
    //     cout << i << " ";
    //     for(auto j = al[i].begin(); j != al[i].end(); j++){
    //         cout << (*j).first << "-" << (*j).second <<" ";
    //     }
    //     cout << endl;
    // }
    mst(n);
    cout << accumulate(key.begin(), key.end(), 0) << endl;
    // for(ll i = 0; i < n; i++) cout << key[i] << ' ';
}
