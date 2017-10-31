#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define N 50001
int INF=1<<30;
struct h{
    int sum,l,r,best;
    h(){    
    }
    h(int _sum, int _l ,int _r, int _best){
        sum=_sum;
        l=_l;
        r=_r;
        best=_best;  
    }
}tree[N*4];
int n;
int a[50001];
void init(int i , int j , int node ){
    if(i==j){
	   tree[node].sum=tree[node].l=tree[node].r=tree[node].best=a[i];
       return ;
    }
    int v1=2*node+1;
    int v2=2*node+2;
    init( i , (i+j)/2 ,v1);
    init( (i+j)/2 + 1 , j ,v2);
    tree[node].sum =tree[v1].sum +tree[v2].sum;
    tree[node].l   =max(tree[v1].l, tree[v1].sum +tree[v2].l);
    tree[node].r   =max(tree[v2].r, tree[v2].sum +tree[v1].r);;
    tree[node].best=max(tree[v1].best,tree[v2].best);
    tree[node].best=max(tree[node].best,tree[v1].r +tree[v2].l);
}
h query( int b , int e , int node , int i , int j){
    h ret;
    ret.best = ret.sum = ret.l = ret.r = INF;
    if( i > e || j < b )
        return ret;
    if( i <= b && j >= e )
      return tree[node];
    int v1 = 2*node+1;
    int v2 = 2*node+2;
    h ret1 = query( b , (b+e)/2 , v1 ,i,j );
    h ret2 = query((b+e)/2 + 1 ,e,v2, i,j);
    if( ret2.best == INF )
        return ret1;
    if( ret1.best == INF )
        return ret2;
    ret.sum = ret1.sum+ret2.sum;  
    ret.l = max( ret1.l , ret1.sum + ret2.l );
    ret.r = max( ret2.r , ret2.sum + ret1.r );
    ret.best = max( ret1.best , ret2.best );
    ret.best = max( ret.best , ret1.r + ret2.l );
    return ret;
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int besito=0;
	scanf("%d", &besito);
    for(int casos=0;casos<besito;casos++){
        scanf("%d", &n);//se lee el numero de elementos
        for(int i =0; i <n; i++){ 
	        int x;scanf("%d", &x);
	        a[i]=x;
        }
        init(0,n-1,0);
        int m;
        scanf("%d", &m);
        for(int i=0;i<m;i++){
            int i1,i2,j1,j2;
            scanf("%d",&i1);
            scanf("%d",&j1);
            scanf("%d",&i2);
            scanf("%d",&j2);
            i1--;i2--;j1--;j2--;
            int dev=0;
            if(i2>=j1){
                if(i2>j1+1)
                    dev=query(0,n-1,0,j1+1,i2-1).sum;    
                dev+=query(0,n-1,0,i1,j1).r;
                if(i2>j1)
                    dev+=query(0,n-1,0,i2,j2).l;
                if(i2==j1 && j2>=i2+1)
                    dev+=max(0,query(0,n-1,0,i2+1,j2).l);
            }else{
                int dev2=query(0,n-1,0,i2,j1).best;
                dev=query(0,n-1,0,i2,j1).sum;
                if(i2>i1){
                    dev+=max(0,query(0,n-1,0,i1,i2-1).r );    
                }    
                if(j2>j1){
                    dev+=max(0,query(0,n-1,0,j1+1,j2).l );    
                }
                dev=max(dev,dev2);
                int dev3=query(0,n-1,0,i2,j2).l;
                if(i2>i1)dev3+=max(0,query(0,n-1,0,i1,i2-1).r);
                int dev4=query(0,n-1,0,j1,j2).l;;
                if(j1>i1)dev4+=max(0,query(0,n-1,0,i1,j1-1).r);
                dev=max( max(dev,dev2),max(dev3,dev4) );
            }
            printf("%d\n",dev );        
        }
    }
    //system("pause"); 
	return 0;
}

