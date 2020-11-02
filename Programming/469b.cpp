#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int a[p],b[p],c[q],d[q],check, count = 0;
    for(int i = 0 ; i < p; i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int i = 0 ; i < q; i++)
    {
        cin >> c[i] >> d[i];
    }
    for(int i = l; i <= r; i++)
    {
        check = 0;
        for(int j = 0; j < q; j++)
        {
            for(int k = 0; k < p; k++)
            {
                if(((c[j] + i >= a[k]) && (c[j] + i <= b[k])) || ((d[j] + i >= a[k]) && (d[j] + i <= b[k])))
                {
                    count++;
                    check = 1;
                    break;
                }
            }
            if(check == 1)
            break;
        }
    }
    cout << count;
}