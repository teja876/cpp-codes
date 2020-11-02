#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int a[t],j=-1;
    for(long long int i = 0; i < t; i++)
    {
        int c,num;
        cin >> c;
        switch (c)
        {
        case 1:
            cin>>num;
            j++;
            a[j] = num;
            break;
        case 2:
            if(j!= -1)
            j--;
            break;
        case 3:
             if(j==-1)
            cout << "Empty!";
            else
            {
                cout<<a[j]<<endl;
            }
            break;   
        default:
            break;
        }
    }
}