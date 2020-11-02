#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, a = 0, b = 0, i = 0, result=0, sum;
    string s;
    cin >> n >> s;
    string f, l;
    f = s[0];
    l = s.end();
    while(s[i] = ! f[0]){
        a++;
        i++;
    }
    i = n-1;
    if(a <= n-1){
        while(s[i] != l[0]){
            b++;
            i--;
        }
    }
    i = 0;
    if(f[0] = l[0]){
        while(i != n){
            sum = 0;
            if(i+1 <= a){
                sum = sum + i;
            }
            else sum = sum + a;
            if(i+1 <= b){
                sum = sum + i;
            }
            else sum = sum + b;
            sum = sum/2;
            result = result + sum + 1;
            i++;
        }
    }
    else{
        result = a + b + 1;
    }
    cout << result;
}