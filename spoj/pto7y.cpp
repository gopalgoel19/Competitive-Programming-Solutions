#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int vis[100000]={0};

vector<int > adj[10010];

void dfs(int i){
    vis[i]=1;

    for(auto u:adj[i]){
        if(!vis[u]){
            dfs(u);
        }
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;

    if(m!=n-1){
        cout<<"NO";
    }else{
        while(m--){
            int x,y;
            cin>>x>>y;
            adj[x-1].push_back(y-1);
        }

        dfs(0);
        int flag=1;
        for(int i=0;i<n;i++){
            if(!vis[i])
                {flag=0;}
        }

        if(flag)cout<<"YES";
        else cout<<"NO";
    }
}
