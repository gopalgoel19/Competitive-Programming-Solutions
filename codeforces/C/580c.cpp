#include<iostream>
#include<vector>
using namespace std;
int N,M;
vector< vector<int> > G;
vector< int > vertexData,visited;
int DFS_modified(int v,int c){
    visited[v]=1;
    //do stuff
    if(vertexData[v]==1)    c++;
    else c=0;
    if(c>M)
        return 0;
    //check for leaf
    if(v>1 && G[v].size()==1)//it is leaf
    {
        if(c>M) return 0;
        return 1;
    }
    int ans=0;
    for(int i=0;i<G[v].size();i++){
        if(visited[G[v][i]]==0)
            ans+= DFS_modified(G[v][i],c);
    }
    return ans;
}
int main(){
    cin>>N>>M;
    vertexData.resize(N+1);
    visited.resize(N+1,0);
    G.resize(N+1,vector<int>());
    for(int i=1;i<=N;i++)
        cin>>vertexData[i];
    //edge list
    int x,y;
    for(int i=1;i<N;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cout<<DFS_modified(1,0)<<endl;
}