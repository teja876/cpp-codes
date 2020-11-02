#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int x,b[n],j=0, check = 0;
        stack <int> s;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            while(s.size() && x > s.top())
            {
                b[j] = s.top();
                j++;
                s.pop();
            }
            s.push(x);
        }
        while(s.size())
        {
            b[j] = s.top();
            j++;
            s.pop();
        }
        for(int i = 0; i < n-1; i++)
        {
            if(b[i] > b[i+1])
            {
                cout<<"no"<<endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout<<"yes"<<endl;
        // for(int i = 0; i < n; i++)
        // {
        //     cout<<b[i];
        // }
        cin>>n;
    }
}