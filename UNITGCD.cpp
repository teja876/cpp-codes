#include<bits/stdc++.h>
using namespace std;

// long long kFactors(long long n, long long k) 
// { 
//     // A vector to store all prime factors of n 
//     long long sol = 0;
  
//     // Insert all 2's in vector 
//     while (n%2 == 0) 
//     { 
//         sol++; 
//         n /= 2; 
//     } 
  
//     // n must be odd at this point 
//     // So we skip one element (i = i + 2) 
//     for (long long  i=3; i*i<=n; i=i+2) 
//     { 
//         while (n%i == 0) 
//         { 
//             n = n/i; 
//             sol++; 
//         } 
//     } 
  
//     // This is to handle when n > 2 and 
//     // n is prime 
//     if (n > 2) 
//         sol++; 
  
//     // If size(P) < k, k factors are not possible 
//     if (P.size() < k) 
//     { 
        
//         return 0; 
//     } 
  
//     // printing first k-1 factors 
//     for (int i=0; i<k-1; i++) 
//         cout << P[i] << ", "; 
  
//     // calculating and printing product of rest 
//     // of numbers 
//     int product = 1; 
//     for (int i=k-1; i<P.size(); i++) 
//         product = product*P[i]; 
//     cout << product << endl; 
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n == 1) printf("1\n");
        else
        printf("%d\n", n /2);
        if(n == 1){
            printf("1 1\n");
            continue;
        }
        int i = 3;
        if(n % 2 != 0){
            // cout << 3 << " " << 1 << " " << 2 << " " << n<< endl;
            printf("3 1 2 %d\n", n);
            n--;
        }
        else {
            // cout << 2 << " " << 1 << " " << 2 << endl;
            printf("2 1 2\n");
        }
        while(i <= n) {
            // cout << 2 << " " << i << " " << i + 1 << endl;
            printf("2 %d %d\n", i, i + 1);
            i += 2;
        }
    }
}