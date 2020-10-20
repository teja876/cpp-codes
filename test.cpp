#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define mod 1000000007



int main()
{
    string s;
    cin >> s;
    int digits = s.length();
    // cout << digits;
    bool anscheck = false;
    ll start;
    string startstring;
    for(int i = 1; i<= digits/ 2; i++){
        startstring = s.substr(0, i);
        start = stoll(startstring);
        // cout << num << " " ;
        if(digits / i >= 2 && (digits % i == 1 || digits % i == 0)){
            // cout << "yes";
            while(startstring.length() <= digits){
                start++;
                startstring.append(to_string(start));
                // cout << 1 << " ";
            }
            if(!startstring.compare(s)) {
                anscheck = true;
                break;
            }
        }
        if(anscheck) break;
    }
    if(anscheck) cout << "YES " << " " << startstring;
    else cout << "NO";
}