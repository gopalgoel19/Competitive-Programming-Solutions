#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m;
    cin>>n>>m;
    vector<int> adj[n+5];
    bool visited[n+5];
    for(i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(m==n-1)
    {
        for(i=1;i<=n;i++)
        {
            visited[i]=false;
        }
        stack<int> s;
        s.push(1);
        visited[1]=true;
        while(!s.empty())
        {
            int x=s.top();
            s.pop();
            for(i=0;i<adj[x].size();i++)
            {
                if(!visited[adj[x][i]])
                {
                    s.push(adj[x][i]);
                    visited[adj[x][i]]=true;
                }
            }
        }
        bool flag=true;
        for(i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                cout<<"NO";
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
