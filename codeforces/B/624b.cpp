#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
vector <long long  int> a;
int main(){
    //freopen("inp.i","r",stdin);
    long long int n;
    a.clear();
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        long long int ttt;
        scanf("%lld",&ttt);
        a.push_back(ttt);
    }
    sort(a.begin(),a.end());
    long long  int ans=0;
   long long int temp=a[a.size()-1]+2;
    //printf("%d=%d",a.size(),a[2]);
    for(int i=a.size()-1;i>=0;i--)
    {
        if(temp==0) break;
        if(temp>a[i]){
        temp=a[i];
        ans+=temp; continue;
        }
        if(temp==a[i]){
            temp--;
            ans+=temp; continue;
        }
        if(temp<a[i]){
            temp--;
            ans+=temp;
            continue;
        }
        //printf(".%d\n",ans);
    }
    printf("%lld",ans);
}
