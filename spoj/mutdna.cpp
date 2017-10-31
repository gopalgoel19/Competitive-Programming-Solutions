#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
int memo[1000001][2];
char   s[1000001];
int n;

int dp(int pos,bool cambia){
    if(pos==-1)return 0;
    if(memo[pos][cambia]!=-1)return memo[pos][cambia];
    
    int dev=1<<30;
    if(cambia==0){
        if(s[pos]=='A'){
            dev=dp(pos-1,cambia);
        }else{
            dev=min(1+dp(pos-1,cambia),1+dp(pos-1,!cambia));    
        }    
    }else{
        if(s[pos]=='B'){
            dev=dp(pos-1,cambia);
        }else{
            dev=min(1+dp(pos-1,cambia),1+dp(pos-1,!cambia));    
        }    
    }    
    
    memo[pos][cambia]=dev;
    return dev;
}

int main(){
    
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    
    while(scanf("%d",&n)==1){
        scanf("%s",s);
        memset(memo,-1,sizeof(memo));
        int x=100;
        while(x<n){
            dp(x,0);
            dp(x,1);
            x+=10;
        }
        
        cout<<dp(n-1,0)<<endl;
    }
    
    
    return 0;
}

