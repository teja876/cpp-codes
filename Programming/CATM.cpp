#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, t;
    cin >> n >> m >> t;
    while(t--){
        int mx, my, c1x, c1y, c2x, c2y;
        cin >> mx >> my >> c1x >> c1y >> c2x >> c2y;
        if((mx >= c1x && mx >= c2x) || (my >= c1y && my >= c2y)) cout << "YES" << endl;
        else if((mx <= c1x && mx <= c2x) || (my <= c1y && my <= c2y)) cout << "YES" << endl;
        else if((abs(mx-c1x) != abs(my - c1y)) || (abs(mx - c2x) != abs(my - c2y))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}