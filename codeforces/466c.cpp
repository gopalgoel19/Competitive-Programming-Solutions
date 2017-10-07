#include<stdio.h>
#include<string.h>
using namespace std;
long long n,a[500009],sum[500009],ans=0;
int main()
{
    scanf("%lld",&n);
    memset(a,0,sizeof a);
    memset(sum,0,sizeof sum);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    long long num=0;
    if(sum[n]%3!=0)
    {
        printf("0"); return 0;
    }
    if(sum[n]==0)
    {
        for(int i=1;i<n;i++)
        {
            if(sum[i]==0)
            {
                ans+=num;
                num++;
            }
        }
    }
    else    for(int i=1;i<=n;i++)
    {
        if(sum[i]==sum[n]/3)
        {
            num++;
        }
        if(sum[i]==sum[n]*2/3)
        {
            ans+=num;
        }
    }
    printf("%lld",ans);
}
