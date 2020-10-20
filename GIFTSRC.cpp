#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int x, y;
        int a, b;
        x = 0; y = 0;
        char c = s[0];
        if(s[0] == 'L'){
            x--;
            a = 0;
        }
        else if (s[0] == 'R')
        {
            x++;
            a = 0;
        }
        else if (s[0] == 'U')
        {
            y++;
            a = 1;
        }
        else if (s[0] == 'D')
        {
            y--;
            a = 1;
        }
        
        
        
        for(int i = 1; i < n; i++){
            if(s[i] == 'U' || s[i] == 'D' && a == 1) continue;
            if(s[i] == 'L' || s[i] == 'R' && a == 0) continue;
            if(s[i] == 'L'){
                x--;
                a = 0;
            }
            else if (s[i] == 'R')
            {
                x++;a = 0;
            }
            else if (s[i] == 'U')
            {
                y++;a = 1;
            }
            else if (s[i] == 'D')
            {
                y--;a = 1;
            }
            c = s[i];
        }
        cout << x <<" " << y << endl;
    }
    
}