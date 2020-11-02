#include <iostream>
#include<cstdio>
#include<string>
#include<math.h>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(int argc, const char * argv[])
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s1,s2,s3;
        char c1,c2,c;
        int a[3];
        for(int i=0;i<3;i++)
        {
            a[i]=0;
        }
        cin>>s1>>c1>>s2>>c2>>s3;
        size_t fn1=s1.find("machula");
        if(fn1!=string::npos)
        {
            s1.erase(fn1,7);
            a[0]=1;
        }
        fn1=s2.find("machula");
        if(fn1!=string::npos)
        {
            s2.erase(fn1,7);
            a[1]=1;
        }
        fn1=s3.find("machula");
        if(fn1!=string::npos)
        {
            s3.erase(fn1,7);
            a[2]=1;
        }
        if(a[0]==1)
        {
            int val1=atoi(s3.c_str());
            int val2=atoi(s2.c_str());
            cout<<val1-val2<<" "<<c1<<" "<<s2<<" "<<c2<<" "<<s3;
        }
        else if(a[1]==1)
        {
            int val1=atoi(s3.c_str());
            int val2=atoi(s1.c_str());
            cout<<s1<<" "<<c1<<" "<<val1-val2<<" "<<c2<<" "<<s3;

        }
        else
        {
            int val1=atoi(s1.c_str());
            int val2=atoi(s2.c_str());
            cout<<s1<<" "<<c1<<" "<<s2<<" "<<c2<<" "<<val1+val2;

        }
        printf("\n");
        scanf("%c",&c);
    }
    return 0;
}