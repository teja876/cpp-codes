#include<stdio.h>
#include<stdlib.h>
main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(long long int i =0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr+n);
    if(n==1)
    {
        cout << arr[0];
    }
    for(long long int i =1; i<n-1; i++)
    {
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
        {
            cout<<arr[i]<<endl;
        }
    }
    if(arr[0]!= arr[1])
    {
        cout<<arr[0]<<endl;
    }
    if(arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<endl;
    }
}