#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string a,b,c;
        cin >> a;
        cin >> b;
        int k=  -1;
        for(int i =0; i < a.length(); i++)
        {
            for(int j  = 0; j < b.length(); j++)
            {
                if(a[i] == b[j])
                {
                    k++;
                    c.push_back(a[i]);
                }
            }
        }
        if(t != 0) cout << c << endl;
        else cout<<c;
    }
}