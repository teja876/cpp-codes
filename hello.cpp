#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define mod 1000000007

ll power(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b % 2 == 1) res = (res* a) % mod;
		b = b / 2;
		a = (a * a) % mod;
	}
	return res % mod;
}

ll abyb(ll a, ll b){
	return (a * power(b, mod - 2)) % mod;
}

ll calc_ncr(ll n, ll r){
	ll ans = 1; 
    for(ll i = 1; i <= r; i++){
        ans = (ans * abyb((n - r + i), i)) % mod;
		// cout << ans << endl;
    }
    return ans;
}

int main() {
	string s = "123";
	while(1) {cout << s;}
}