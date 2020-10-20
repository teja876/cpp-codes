#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll, pair<ll, ll>>> push_in_place(vector<pair<ll, pair<ll, ll>>> points, ll x, ll y){
    long long dist = pow(x, 2) + pow(y, 2);
    if(points.size() == 0) {points.push_back({dist, {x, y}}); return points;}
    ll low = 0, high = points.size() - 1, mid;
    while(low < high){
        mid = (low + high) / 2;
        if(points[mid].first < dist) high = mid;
        else low = mid + 1;
    }
    points.insert(points.begin() + low + 1, {dist, {x, y}});
    return points;
}

int main(){
    ll q, k, x, y, qt;
    cin >> q >> k;
    vector<pair<ll, pair<ll, ll>>> points;
    for(ll i = 0; i < q; i++){
        cin >> qt;
        if(qt == 1) cin >> x >> y;
        if(qt == 2) cout << points[k-1].first<< endl;
        else{
            points = push_in_place(points, x, y);
        }
        for(ll i =0; i < points.size(); i++){
            cout << points[i].first << " " << points[i].second.first << " " << points[i].second.second << endl;
        }
    }
    // points.push_back({1, {1, 2}});
    // points.insert(points.begin() + 1, {2, {3,6}});
    // cout << points[0].first << " " << points[1].first;
    // for(ll i =0; i < points.size(); i++){
    //     cout << points[i].first << " " << points[i].second.first << " " << points[i].second.second << endl;
    // }
}


9 3
1 10 10
1 9 9
1 -8 -8
1 12 12
1 7 7
1 2 2
1 6 6 
1 5 5
1 1 1