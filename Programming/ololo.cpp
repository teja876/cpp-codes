#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    long long int n;
    scanf("%lld",&n);
    long long int res = 0,a[n];
    scanf("%lld", &a[0]);
    res = a[0];
    for(long long int i=1; i<n; i++)
    {
        scanf("%lld", &a[i]);
        res ^=a[i];
        
    }
    printf("%lld", res);
}