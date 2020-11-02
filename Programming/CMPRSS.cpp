#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        string s;
        for(int i = 0; i < n; i++) cin >> a[i];
        int count = 0;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1] + 1) count++;
            else{

                if(count >= 2){
                    s.append(to_string(a[i] - count));
                    s.append("...");
                    s.append(to_string(a[i]));
                }
                else if(count == 1)
                {
                    s.append(to_string(a[i-1]));
                    s.push_back(',');
                    s.append(to_string(a[i]));
                }
                count = 0;
                if(i != n-1) s.push_back(',');
            }
        }
        cout << s << endl;
    }
}
                