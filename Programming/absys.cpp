#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2, s3;
        char c1, c2;
        int a,b,c;
        cin >> s1 >> c1 >> s2 >> c2 >> s3;
        for(int i = 0; i<s1.length(); i++)
        {
            if(s1[i] == 'm')
            {
                b = stoi(s2);
                c = stoi(s3);
                a = c - b;
                cout << a<<" + "<<b<<" = "<<c<<endl;
            }
            else continue;
        }
        for(int i = 0; i<s2.length(); i++)
        {
            if(s2[i] == 'm')
            {
                a = stoi(s1);
                c = stoi(s3);
                b = c - a;
                cout << a<<" + "<<b<<" = "<<c<<endl;
            }
            else continue;
        }
        for(int i = 0; i<s3.length(); i++)
        {
            if(s3[i] == 'm')
            {
                a = stoi(s1);
                b = stoi(s2);
                c = a + b;
                cout << a<<" + "<<b<<" = "<<c<<endl;
            }
            else continue;
        }
    }
}
