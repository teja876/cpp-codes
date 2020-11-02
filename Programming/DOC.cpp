#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s,count = 0,check = 0;
    cin >>p>>q>>r>>s;
    for(int i = p; i<=q; i++)
    {
        for(int j = r; j <= s; j++)
        {
            int a = i, b = j ;
            while(a && b)
            {
                if(a >= b)
                {
                    a = a - b;
                    count++;
                }
                else 
                {
                    b = b - a;
                    count++;
                }    
            }
            check++;
        }
    }
    cout << count;
}