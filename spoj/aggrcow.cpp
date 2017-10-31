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
#define all(v) (v).begin(),(v).end()
using namespace std ;
vector<int>c;
int n,m;
bool f(int val){
    int x=0;
    for(int i=1;;i++){
        if(i==m)return 1;
        x=upper_bound(all(c),c[x]+val-1)-c.begin();
        if(x==c.size())return 0;
    }
    return 0;
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int casos;
    scanf("%d",&casos);
    for(int cases=0;cases<casos;cases++){
        scanf("%d",&n);
        scanf("%d",&m);
        c.resize(n);
        for(int i=0;i<n;i++){
            int h;
            scanf("%d",&h);
            c[i]=h;
        }
        sort(all(c));
        int lo=0;int hi=c[n-1]-c[0]+1;
        for(int i=0;i<39;i++){
            int me=(lo+hi)/2;
            if( f(me) )lo=me;
            else hi=me;  
        }   
        printf("%d\n",lo);
    }
    //system("pause");
    return 0;
}



