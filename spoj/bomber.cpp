#include<iostream>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<cstring>
#include<cstdio>
#define grundy(a,b) memo[a][b]
using namespace std;

int main(){	
	

    int memo[101][101];	
    for(int i=0;i<=100;i++)memo[i][0]=memo[0][i]=0;
	
	
	for(int a=1;a<=100;a++){
	    for(int b=1;b<=100;b++){
            
            bool visited[a*b+3];
            int limit=a*b+2;
            memset(visited,0,sizeof(visited));
	       
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    int val=grundy(i,j)^grundy(a-i-1,j)^grundy(i,b-j-1)^grundy(a-i-1,b-j-1);
                    if(val<=limit)
                        visited[val]=1;    
                }
            }
            
            int dev=0;
            for(int i=0;i<a*b+2;i++)
                if(!visited[i]){
                    dev=i;
                    break;
                }
            
            memo[a][b]=dev;
        }
    }
        
    
	int tc;
	cin>>tc;
	
    while(tc--){
    
	    int n,m;
        scanf("%d %d",&n,&m);
        
        int g=memo[n][m];
        if(g==0)puts("2");
        else puts("1");
    }
	
    return 0;
}


