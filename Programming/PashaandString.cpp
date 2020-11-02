#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, f, l) for(ll i = f; i < l; i++)

// int main(){
//     string s;
//     ll m;
//     cin >> s;
//     cin >> m;
//     vector<ll> a(m,0), sv(s.length(), 0);
//     rep(i, 0, m) cin >> a[i];
//     // sort(a.begin(), a.end());
//     rep(i, 0, m){
//         if(a[i] > s.length()/2) a[i] = s.length() - a[i] + 1;
//     }
//     sort(a.begin(), a.end());
//     ll count,j;
//     rep(i, 0, s.length()/2){
//         j=m;
//         while(i+1 < a[j-1] && j>0){
//             j--;
//         }
//         sv[i] = j;
//         char c;
//         if(sv[i] % 2 != 0){
//             c = s[s.length() - i - 1];
//             s[s.length() - i - 1] = s[i];
//             s[i] = c;
//         }
//     }
//     rep(i, 0, s.length()) cout << s[i];
//     // cout << endl;
//     // rep(i, 0, s.length()) cout << sv[i];
//     // cout << endl;
//     // rep(i, 0, m) cout << a[i];
// }


int main(){
    string s;
   cin>>s;
   s='&'+s;
   int siz=s.size();
   int m,pos;
   cin>>m;
   vector<int> a(200002,0);
   for(int i=1;i<=m;i++)
       { cin>>pos; a[pos]++;}
   for(int i=1;i<=(siz/2);i++)
       {a[i]=(a[i]+a[i-1])%2;}
   for(int i=1;i<siz;i++)
   {
       if(a[i]==1)    
           swap(s[i],s[siz-i]);
   }
   cout<<s.substr(1);
   return 0;
}
