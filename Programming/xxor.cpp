#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int a[n],l,r;
    for(long long int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    for(long long int i = 0; i < q; i++)
    {
        cin>>l>>r;
        int count0,count1,check=1,num=0,digit,k=0;
        while(check)
        {
            check = 0,count0=0,count1=0;
            for(long long int j = l-1; j < r; j++)
            {
                digit = a[j]%2;
                a[j] = a[j]/2;
                if(a[j] != 0) check = 1;
                if(digit == 1) count1++;
                else count0++;
            }
            cout << count0<<" "<<count1<<endl;
            if(count0 < count1) cout<<0<<endl;
            else cout<<1<<endl;
            if(count0 < count1) num = num;
            else num = num + pow(2,k);
            k++;
            // if(count0 < count1) cout<<0;
            // else cout<<1;
        }
        // while(num<2147483647)
        // {
        //     num = num + num * 2;
        //     cout<<1;
        // }
        cout << num<< endl;
    }
}