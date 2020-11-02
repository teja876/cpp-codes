#include<bits/stdc++.h>
#include<set>
using namespace std;
#include<limits>

vector <vector<pair <int, int>>> al;
vector<vector<int>> dist;

void dijkstra(int sor){
    int INF = numeric_limits<int>::max();
    set< pair <int, int>> sets;
    sets.insert(make_pair(0, sor));
    dist[sor][sor] = 0;
    int u;
    while (!sets.empty())
    {
        pair<int, int> temp  = *(sets.begin());
        sets.erase(sets.begin());
        u = temp.second;
        // cout << u << " ";
        for(auto i = al[u].begin(); i != al[u].end(); i++){
            int v = (*i).second;
            int weight = (*i).first;
            // cout << v << " " << weight;
            if(dist[sor][v] > dist[sor][u] + weight && weight != 0){
                if(dist[sor][v] != INF){
                    sets.erase(sets.find(make_pair(dist[sor][v], v)));
                }

                dist[sor][v] = dist[sor][u] + weight;
                sets.insert(make_pair(dist[sor][v], v));
                // cout << weight << " ";
            }
            // cout << endl;
        }
        // cout << endl;
        // for(auto j = dist[sor].begin(); j != dist[sor].end(); j++){
        //     cout << *j << " ";
        // }
        // cout << endl;
    }
    

}

int main(){
    int t;
    cin >> t;
    int n,w;
    int INF = numeric_limits<int>::max();
    
    while(t--){
        cin >>n;
        al.assign(n, vector<pair<int, int>>());
        dist.assign(n, vector<int>(n, INF));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> w;
                al[i].push_back(make_pair(w, j));
            }
        }
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << al[i][j].first;
        //     }
        //     cout << endl;
        // }

        // for(int i = 0; i < n; i++){
        //     dijkstra(i);
        // }
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << dist[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << INF << " ";
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                bool no = true;
                for(int k = 0; k < n; k++){
                    if(i!=k && j!=k){
                        if(al[i][k].first + al[k][j].first == al[i][j].first){
                            no = false;
                            break;
                            // cout << i+1 <<" " << j+1 <<endl;
                        }
                    }
                }
                if(no == true){
                    cout << i+1 <<" " << j+1 <<endl;

                }
            }
        }
    }
}