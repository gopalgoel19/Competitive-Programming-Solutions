#include<iostream>
#include<map>
#include<queue>
#include<string>
#include<vector>
#include<sstream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<bitset>
using namespace std;
int n;
vector<pair<int,int> >v[10001];
int papi[10001];
bool visited[10001];
int L[10001];
int P[10001][17];
long long dis[10001];

void getArbol(int node,int niv,long long ac){
    visited[node]=1;
    L[node]=niv;
    dis[node]=ac;
    
    for(int i=0;i<v[node].size();i++){
        if(!visited[v[node][i].first]){
            papi[v[node][i].first]=node;
            getArbol(v[node][i].first,niv+1,ac+v[node][i].second);     
        }
    }
}

void getPapi(){
    memset(P,-1,sizeof(P));
    for(int i=0;i<n;i++)P[i][0]=papi[i];
    
    for(int j=1;(1<<j)<n;j++)
        for(int i=0;i<n;i++)
            if(P[i][j-1]!=-1)
                P[i][j]=P[P[i][j-1]][j-1];
    
    return ;      
}

int LCA(int a,int b){
    if(L[a]<L[b])swap(a,b);
    
    for(int i=14;i>=0;i--)
        if(L[a]-(1<<i)>=L[b] )
            a=P[a][i];    
    
    if(a==b)return b;
    
    for(int i=14;i>=0;i--)
        if(P[a][i]!= P[b][i]){
            a=P[a][i];
            b=P[b][i];    
        }
    
    return papi[a];
}

int papiK(int node,int d){
    
	for(int i=13;i>=0;i--)
		if(d>=(1<<i)){
			node=P[node][i];
			d-=(1<<i);
		}
	
	return node;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    
    int tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)v[i].clear();
        for(int i=0;i<n-1;i++){
            int p,q,d;
            scanf("%d %d %d",&p,&q,&d);
            p--;q--;
            v[p].push_back(make_pair(q,d));
            v[q].push_back(make_pair(p,d));
        }
        
        memset(visited,0,sizeof(visited));
        memset(papi,-1,sizeof(papi));
        memset(dis,0,sizeof(dis));
        
        getArbol(0,0,0);
        getPapi();
        
        char ad[8];
        
        while(scanf("%s",ad)){
            if(ad[1]=='O')break;    
            if(ad[0]=='D'){
                int p ,q ;
                scanf("%d %d",&p,&q);
                p--;q--;
                int node=LCA(p,q);
                long long d=dis[p]+dis[q]-2*dis[node];
                printf("%lld\n",d);
            }else{
                if(ad[0]=='K'){
                    int p ,q,d ;
                    scanf("%d %d %d",&p,&q,&d);
                    p--;q--,d--;
                    int node=LCA(p,q);
                    int depth=L[p]-L[node];
                
                    if(depth>=d){
                        printf("%d\n",papiK(p,d)+1);    
                    }else{
                        int aux=L[q]-L[node];
                        printf("%d\n",papiK(q,aux-(d-depth) )+1);
                    }
                }
            }
        }
        printf("\n");
    } 
    return 0;
}


