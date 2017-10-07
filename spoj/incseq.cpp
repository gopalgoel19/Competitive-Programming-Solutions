#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

int n , k , ans = 0 , mod = 5000000 ;
ll tree[51][100000+10] ;

void update(int idx,int j ,ll V)
{
    while(idx<=100005)
    {
        tree[j][idx]=(tree[j][idx]+V)%mod;
        idx+=idx&(-idx);
    }
}

ll query(int idx,int j)
{
    ll sum=0;
    while(idx>0)
    {
        sum=(sum+tree[j][idx])%mod;
        idx-=idx&(-idx);
    }
    return sum;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&n,&k);
    for(int j=1;j<=n;j++)
    {
        int a ;
        scanf("%d",&a);
        a++;
        for(int i=1;i<=k;i++)
        {
            ll p =  i == 1 ? 1 : query(a-1,i-1);
            update(a,i,p);
            if(i==k) ans=(ans+p)%mod;
        }
    }
    cout << ans << endl ;
    return 0;
}
