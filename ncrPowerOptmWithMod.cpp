#include <bits/stdc++.h> 
using namespace std;
#define ll long long
vector<ll> fact(1000001, 1);
#define mod 1000000007

ll power(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b % 2 == 1) res = (res* a) % mod;
		b = b / 2;
		a = (a * a) % mod;
	}
	return res;
}

void pre_fact(){
	ll s = 1000001;
	for(ll i = 1; i < s; i++){
		fact[i] = (i * fact[i - 1]) % mod;
		// fact[i] = power(fact[i]);
	}
}

ll calc_ncr(ll n, ll r){
	ll result;
	result = ((((fact[n] * power(fact[r], mod - 2) % mod) * power(fact[n - r], mod - 2)) % mod));
	return result;
}

int main() {
	pre_fact();
	ll a, b, result = 0;
	cin >> a >> b;
	for(ll i = 1; i <= min(a, b); i++){
		result = (result + (calc_ncr(a, i) * calc_ncr(b, i)) % mod) % mod;
	}
	cout << result;
}