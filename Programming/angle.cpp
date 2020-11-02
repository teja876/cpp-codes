#include<bits/stdc++.h>
using namespace std;
int main()
{
    float p;
    float l;
    int min;
    cin >> p;
    cin >> l;
    min = ((p * 60)/360) * l;
    int h = min / 60;
    int m = min % 60;
    float angle;
    angle = fabs(0.5 * (60 * h - 11 * m));
    if(angle > 180)
    {
        angle = 360 - angle;
    }
    angle = floor(angle * 100) /100;
    cout<<setprecision(2)<< fixed << angle;
    
}