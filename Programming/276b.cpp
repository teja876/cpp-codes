#include<bits/stdc++.h>
using namespace std;

// string whichPlayerWins(string s) {
//     int len = s.length();
//     int counts[26];
//     memset(counts, 0, sizeof(counts));
//     int i;
//     for (i = 0; i < len; i++) 
//         counts[s[i] - 'a']++;
//     int numOdd = 0;
//     for (i = 0; i < 26; i++) {
//         if (counts[i] % 2 == 1) numOdd++; 
//     }
//     if (numOdd % 2 == 1) return "First";
//     else return "Second";
// }
int main(){
    
    string s;
    cin >> s;
    int len = s.length(), odd = 0, total = 0, count[26];
    memset(count, 0, sizeof(count));
    for(int i = 0; i<len; i++)
    {
        count[s[i] - 'a']++;
    } 
    for(int i =0; i < 26; i++)
    {
        if(count[i] % 2 == 1) odd++;
    }
    if(odd == 0 || odd % 2 == 1){
        cout << "First";
    } 
    else cout << "Second";
    
    // cout << whichPlayerWins(s);
}