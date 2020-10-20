#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
vector<int> binary;

int startIndex(int len){
	int startInd = 1;
	for(int i = 1; i < len; i++){
		if(binary[i] == 1 && binary[i - 1] == 1){
			startInd = i;
		}
	}
	cout << "startInd" << startInd << endl;
	return startInd;
}

int formBinary(ll n){
	binary.assign(34, 0);
	int len = 0;
	while(n > 0){
		binary[len] = n % 2;
		n /= 2;
		len++;
	}
	cout << "len" << len << endl;
	return len;
}

int getIndex(int len, int startInd){
	int finalIndex;
	for(int i = startInd; i < len; i++){
		if(binary[i] == 1){
			if(binary[i + 1] == 0 && binary[i + 2] == 0){
				binary[i + 1] = 1;
				finalIndex = i + 1;
				break;
			}
		}
	}
	cout << "finalIndex" << finalIndex << endl;
	return finalIndex;
}

ll getAns(int len, int finalIndex){
	ll ans = 0, power2 = 1;
	for(int i = 0; i< 34; i++){
		if(i >= finalIndex){
			ans += (binary[i] == 1)? (power2): 0;
		}
		power2 *= 2;
	}
	cout << "ans" << ans << endl;
	return ans;
}

int main() {
	int t; 
	cin  >> t;
	while(t--){
		long long n;
		cin >> n;
		int len = formBinary(n);
		int startInd = startIndex(len);
		int finalIndex = getIndex(len, startInd);
		ll ans = getAns(len, finalIndex);
		cout << ans << endl;
		// cout << t << endl;
	}
}