#include<iostream>
#include<algorithm>
using namespace std;
void bs(int arr[], int  a, int s, int e)
{
    int mid = s+e/2;
    if(arr[mid] == a)
    {
        cout << mid << endl;
        return;
    }
    if(a < arr[mid])
    {
        bs(arr, a, s, mid-1);
    }
    if(a >arr[mid])
    {
        bs(arr, a, mid+1, e);
    }
}
main()
{
    int n;
    cin>>n;
    int arr[n],i = 0, a;
    while(i < n)
    {
        cin >> arr[i];
        i++;
    }
    //  while(i < n)
    // {
    //     cout << arr[i];
    //     i++;
    // }
    sort(arr, arr+n);
    cin >> a;
    bs(arr, a, 0, n-1);
}
