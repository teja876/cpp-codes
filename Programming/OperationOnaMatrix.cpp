#include<bits/stdc++.h>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n) for(ll i = f; i < n; i++)

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         unordered_map<ll, ll> mymap1;
//         unordered_map<ll, ll> mymap2;
//         ll n, m, q, x, y;
//         cin >> n >> m >> q;
//         rep(i, 0, q){
//             cin >> x >> y;
//             if(mymap1.count(x) == 1) mymap1[x]++;
//             else
//             {
//                 mymap1[x] = 1;
//             }
//             if(mymap2.count(y) == 1) mymap2[y]++;
//             else mymap2[y] = 1;
//         }
//         unordered_map<ll, ll>::iterator it1;
//         unordered_map<ll, ll>::iterator it2;
//         ll vo = 0, ho = 0;
//         ll size = mymap1.size(), count = 0;
//         for(it1 = mymap1.begin(); it1!= mymap1.end(); it1++){
//             if(it1->second % 2 != 0){
//                 ho = ho + m;
//             }
//             for(it2 = mymap2.begin(); it2 != mymap2.end(); it2++){
//                 ll a = it1->second;
//                 ll b = it2->second;
//                 if(a % 2 == 0){
//                     if((a + b) % 2 != 0) ho++;
//                 }
//                 else{
//                     if((a + b) % 2 == 0) ho--;
//                 }
//                 if(b%2 != 0 && count == 0){
//                     vo = vo + n - size;
//                 }
//                 // if(a+b%2 == 0){
//                 //     if(a%2 != 0) vo = vo - 1;
//                 // }
//                 // else
//                 // {
//                 //     if(a%2 == 0) vo = vo + 1;
//                 // }
//             }
//             count++;
//         }
//         // ll size = mymap1.size();
//         // for(it2 = mymap2.begin(); it2 != mymap2.end(); it2++){
//         //     ll b = it2->second;
//         //     if(b%2 != 0){
//         //         vo = vo + n - size;
//         //     }
//         // }
//         // vo = vo - size;
//         cout << ho + vo << endl;
//         // for(it1 = mymap1.begin(); it1!= mymap1.end(); it1++){
//         //     cout << it1->first << " " << it1->second << endl;
//         // }
//         // for(it2 = mymap2.begin(); it2 != mymap2.end(); it2++){
//         //     cout << it2->first << " " << it2->second << endl;
//         // }
//     }

// }

int main(){
    int t;
    cin >>t;
    ll n,m,q,a,b;
    while(t--){
        cin >> n>> m;
        cin >> q;
        vector<ll>v(n,0);
        vector<ll>h(m,0);
        rep(i, 0, q){
            cin >> a>>b;
            v[a-1]++;
            h[b-1]++;
        }
        ll x = 0, y = 0;
        rep(i, 0, n){
            if(v[i]%2 == 0) x++;
        }
        rep(i, 0, m){
            if(h[i] % 2 == 0) y++;
        }
        cout << x*(m - y) + y * (n - x) << endl;
    }
}

