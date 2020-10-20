#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, x;
	    cin >> n >> x;
	    long long ln = 0, gn = 0, lm = INT_MIN, gm = INT_MAX;
	    long long hx = 0;
	    long long a;
	    long long ret, ret2, ret3;
	    for(long long i = 0; i < n; i++){
	        cin >> a;
	        if(a == x){
	            hx = 1;
	            continue;
	        } else if(a > x){
	            gn++;
	            gm = min(gm, a);
	        } else{
	            ln++;
	            lm = max(lm, a);
	        }
	    }
	    ret = abs(gn - ln);
	    if(hx || lm + gm == x * 2){
	        cout << ret <<endl;
	    } else{
            if(n == 1) {cout << 1 << endl; continue;}
            if(lm + gm < x * 2) ret2 = abs(gn - ln - 1);
            else ret2 = abs(gn - ln + 1);
            ret = min(ret2 + 1, ret + 1);
            // cout << ret2 << " " << ret << endl;
            cout << ret <<endl;
	    }
	    
	}
	return 0;
}