#include <ctime>
#include <numeric>
#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
#include <cmath>
#include <cctype>
#include <sstream>
#include <map>
#include <set>
#include <cstdio>
#include <queue>
using namespace std ;
int R,C;
char c[101][101];
int memo[101][101][101];
int dp(int x1,int y1,int x2,int y2){
    if(x1==R || y1==C || x2==R || y2==C)return -1<<20;
    if(c[x1][y1]=='#' || c[x2][y2]=='#')return -1<<20;
    int cont=0;
    if(c[x1][y1]=='*')cont++;
    if(c[x2][y2]=='*')cont++;
    if(x1==x2 && y1==y2 && c[x1][y1]=='*')cont=1;
    if(x1==R-1 && y1==C-1 && x2==R-1 && y2==C-1){
        return (c[x1][y1]=='*');
    }
    if(memo[x1][y1][x2]!=-1)return memo[x1][y1][x2];
    int dev=cont+max( max( dp(x1+1,y1,x2+1,y2),dp(x1+1,y1,x2,y2+1)),
        max( dp(x1,y1+1,x2+1,y2),dp(x1,y1+1,x2,y2+1) ) ) ;
    memo[x1][y1][x2]=dev;
    return dev;
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int cases;
    cin>>cases;
    for(;cases--;){
        cin>>C>>R;
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)    
                cin>>c[i][j];
        memset(memo,-1,sizeof(memo));
        cout<<dp(0,0,0,0)<<endl;
    }
    //system("pause");
    return 0;
}
