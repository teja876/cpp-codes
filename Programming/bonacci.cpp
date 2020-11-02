#include<iostream>
using namespace std;
main()
{
    long long int n,q;
    cin >> n;
    cin >>q;
    long long int arr[n];
    long long int p;
    for(long long int i = 0; i<n; i++)
    {
        cin >> arr[i];
        if(i==0)
        {
            p = arr[i];
        }
        else
        {
            p = p ^ arr[i];
        }
        
        
    }
    long long int x;
    while(q--)
    {
        
        cin >> x;
        if(x==n+1)
        {
            cout << p<<endl;
        }
        if(x>n+1)
        {
            cout << 0<<endl;
        }
        if(x<=n)
        {
            cout<<arr[x-1]<<endl;
        }
    }
}