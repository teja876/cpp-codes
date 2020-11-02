#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;
    for(int j = l; j <= h-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
           int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[h];
    arr[h] = temp;
    return (i+1);
}
void qsort(int arr[], int l, int h)
{

    if(l < h)
    {
        int index = partition(arr, l, h);
        qsort(arr, l, index-1);
        qsort(arr, index+1, h);
    }
}
main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    qsort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}