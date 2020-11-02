#include<bits/stdc++.h>
#include<limits>
#include<set>
using namespace std;

vector<vector< pair<long long int, long long int>>> al;
vector <long long int> dist;

void spath(long long int sor){
    long long int INF = numeric_limits<long long int >::max();
    set< pair< long long int, long long int>> sets;
    sets.insert(make_pair(0, sor));
    dist[sor] = 0;

    while (!sets.empty())
    {
        pair<long long int, long long int> temp = *(sets.begin());
        sets.erase(sets.begin());
        long long int u = temp.second;
        for(auto i = al[u].begin(); i != al[u].end(); i++){
            long long int v = (*i).second;
            long long int weight = (*i).first;
            // cout << v << " " << weight;
            if(dist[v] > dist[u] + weight ){
                if(dist[v] != INF){
                    sets.erase(sets.find(make_pair(dist[v], v)));
                }
                dist[v] = dist[u] + weight;
                sets.insert(make_pair(dist[v], v));
            }  
            // cout << endl;  
        //     for(auto l = dist.begin();l != dist.end(); l++){
        //     cout << *l << " ";
        // }
        // cout << endl;
        }
    }
    
}
int main(){
    long long int t, n, m, s, e, a, b, c;
    cin >> t;
    long long int INF = numeric_limits<long long int>::max();
    while(t--){
        cin >> n >> m>> s >> e;
        s--;e--;
        al.assign(n, vector< pair<long long int, long long int>>());
        dist.assign(n, INF);
        for(long long int i = 0; i < m; i++){
            cin >> a >> b >> c;
            al[a-1].push_back(make_pair(c, b-1));
            al[b-1].push_back(make_pair(c, a-1));
        }
        // for(long long int i = 0; i < n; i++){
        //     cout << i << "->";
        //     for(auto j = al[i].begin(); j != al[i].end(); j++){
        //         cout << (*j).first << "-" << (*j).second << " ";
        //     }
        //     cout << endl;
        // }
        spath(s);
        // cout << INF<< endl;
        // for(long long int i = 0; i < n; i++){
        //     cout << dist[i] << " ";
        // }
        if(dist[e] != INF){
            cout << dist[e] << endl;
        }
        else cout << "NONE" << endl;
    }
}