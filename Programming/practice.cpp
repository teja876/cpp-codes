#include <bits/stdc++.h>

using namespace std;

int f, src, dest, up, down, moves;
int vis[1000001];
int dist[1000001];

void bfs()
{
    int cur, nextUp, nextDown;
    queue<int> q;
    vis[src] = 1;
    dist[src] = 0;
    q.push(src);
    while(!q.empty())
    {
        cur = q.front();
        q.pop();
        nextUp = cur + up;
        nextDown = cur - down;
        if(nextUp<=f && !vis[nextUp])
        {
            vis[nextUp] = 1;
            dist[nextUp] = dist[cur]  + 1;
            q.push(nextUp);
        }
        if(nextDown>=1 && !vis[nextDown])
        {
            vis[nextDown] = 1;
            dist[nextDown] = dist[cur]  + 1;
            q.push(nextDown);
        }
    }
}

int main()
{
    int A = 943566;
    string s;
    while(A > 0){
        int rem = A % 26;
        cout << rem << endl;
        rem--;
        if(rem == -1) rem = 25;
        A = A / 26;
        char c = char(65 + rem);
        // s.insert(0, c);
        s = c + s;
        // cout << c << endl;
    }
    // char c = (char)(65);
    // cout << c << endl;
    cout << s << endl;
}