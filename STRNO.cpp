#include<bits/stdc++.h>
using namespace std;
vector<long long> pr;
void SieveOfEratosthenes(long long n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          pr.push_back(p); 
    
} 

int main(){
    int t;
    cin >> t;
    SieveOfEratosthenes(1000000000/ pow(2, 1000000000 - 1));
    while(t--){
        long long x, k, result = 0;
        cin >> x >> k;
        // vector<int> a(x+1, 0);
        long long ans = 0;
        // for(long long i = 2; i<= x; i++){
        //     int j = i;
        //     if(result == k){
        //         ans = 1;
        //         break;
        //     }
        //     if(a[i] == 0){
        //         result++;
        //         while(j <= x){
        //             a[i] = 1;
        //             j = j + j;
        //         }
        //     }
        // }
        // if(result == k) ans = 1;
        // long long l = 2;
        // for(long long i = l; i <= k; i++){
        //     for(long long j = l; j <= x; j++){
        //         if(x % j == 0){

        //         }
        //     }
        // }
        long long i = 2, rep = x;
        // while(ans < k && (i <= x) && rep != 1){
        //     if(rep % i == 0){
        //         rep = rep / i;
        //         ans++;
        //         // cout << ans << " " << rep << " ";
        //     }
        //     else {
        //         if(i == 2) i++;
        //         else
        //         {
        //              i = i + 2;
        //         }
                
        //     }
        // }
        // if(rep % i == 0) ans++;
        long long lim = x / pow(2, k - 1);
        for(long long i = 0; i < lim; i++){
            while(rep % pr[i] == 0){
                rep = rep / pr[i];
                ans++;
            }
        }
        result = (ans == k) ? 1 : 0;
        cout << result << endl;

    }
}