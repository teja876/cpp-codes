#include<bits/stdc++.h>
#include<string>
#include<limits>
#include<set>
#include<map>
using namespace std;

#define ll long long
#define rep(i, f, n)          for(ll i = f; i < n; i++)
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define sv()                  int t; scanf("%d",&t); while(t--)

int main(){
    ll l,r;
    sv(){
        cin >> l >> r;
        vector<pair<int, int>> zero;
        vector < ll > num;
        for(ll i = l; i <= r; i++) num.push_back(i);
        int j, cnt ;
        for(int i = 0; i < l-r+1; i++){
            j = 64;cnt = 0;
            while(j !=0){
                if(num[i] % 2 == 0) cnt++;
                num[i] /= 2;
                j--;
            }
            zero.push_back({cnt, i});
            // zero[i].second() = i;
        }
        sort(zero.begin(), zero.end());
        for(ll i = l; i <= r; i++) num.push_back(i);
        ll result = num[zero[0].second] ^ num[zero[l+r].second];
        cout << result << endl;
    }
}