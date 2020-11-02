#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    int nt = n/2;
    if(n % 2 == 0){
        cout<<nt<<endl;
        while(nt--) cout<<2<<" ";
    }
    else
    {
        if(nt == 1){
            if(n%2 == 0){
                cout<<1<<endl;
                cout<<2;
            }
            else
            {
                cout<<1<<endl;
                cout<<3;
            }
            
        }
        else{
            cout << nt<<endl;
            nt--;
            while(nt--) cout<<2<<" ";
            cout << 3;
        }
    }
    
}