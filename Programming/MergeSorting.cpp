#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int h)
{
    int ls = m-l+1;
    int rs = h-m;
    int left[ls], right[rs],i, j, k;
    for ( i = 0; i < ls; i++) 
        left[i] = arr[l + i]; 
    for ( j = 0; j < rs; j++) 
        right[j] = arr[m + 1+ j];
    i =0;
    j = 0;
    k = l;
    while(i < ls && j < rs)
    {
        if(left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < ls)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < rs)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int l, int h)
{
    if(l < h)
    {
        int m = (l + h)/ 2;

        mergesort(arr, l, m);
        mergesort(arr, m+1, h);
        merge(arr, l, m, h);

    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}