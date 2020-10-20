#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,float> &a, 
              const pair<int,float> &b) 
{ 
    return (a.second > b.second); 
}

int main(){
    vector<pair<int, float>> m;
    while (1)
    {
        int high, n;
        cin >> high >> n;
        if(high == 0 &&  n == 0) break;
        vector<int> c(n),f(n);
        for(int i = 0; i < n; i++){
            cin >> c[i] >> f[i];
            float temp = (float)f[i] / (float)c[i];
            m.push_back(make_pair(i, temp));
        }
        sort(m.begin(), m.end(), sortbysec);
        int cost = 0, fun = 0, sum=0;
        for(auto it = m.begin(); it != m.end(); it++){
            
            if(cost + c[(*it).first] > high ){
                continue;
            } 
            cost += c[(*it).first];
            fun += f[(*it).first];
            // sum = sum + c[(*it).first];
            // cout << (*it).first << " " << (*it).second << endl;
        }
        cout << cost << " " << fun << endl;
        m.clear();
    }
    
}