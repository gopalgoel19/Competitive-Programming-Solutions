#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
#include<sstream>
#include<algorithm>
#include<cmath>
#define mod 10000000000000000LL
using namespace std;
int maxVal=100002;
long long tree[2][100002];

long long read(int dim,int idx){
    long long sum=0;
    while(idx!=0){
        sum+=tree[dim][idx];
        idx-=(idx&-idx);    
    }
    return sum;    
}

void update(int dim,int idx,long long val){
    while(idx<maxVal){
        tree[dim][idx]+=val;    
        idx+=(idx&-idx);
    }
        
}

int main(){
    
    
    int tc;
    scanf("%d",&tc);
    while(tc--){
        memset(tree,0,sizeof(tree));        
        int n,q;
        cin>>n;
        cin>>q;
        for(int i=0;i<q;i++){
            int op;
            scanf("%d",&op);
            int p,q,v;
            
            if(op==0){
                scanf("%d%d%d",&p,&q,&v);
                update(0,p,v);
                update(0,q+1,-v);
                
                update(1,p,(long long)v*(p-1));
                update(1,q+1,-(long long)v*q);
                
            }else{
                scanf("%d%d",&p,&q);
                printf("%lld\n",read(0,q)*q-read(1,q)- read(0,p-1)*(p-1)+read(1,p-1));
            }
        }
    }
    
    return 0;
}


