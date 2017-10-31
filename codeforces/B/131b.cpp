#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll f(int n){
    return (1LL*n*(n-1)/2);
}
int __min(int a,int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int N,t;
    ll ans=0;
    cin>>N;
    vector<int> v(22,0);//-10 to +10 : 
    while(N--){
        cin>>t;
        if(t>0)
            v[t+10]++;
        else if(t==0)
            v[0]++;
        else
            v[-t]++;
    }
    //traverse the hash array
    t=v[0];
    ans = f(t);
    for(int i=1;i<=10;i++){
        ans+= f(__min(v[i],v[i+10]));
    }
    cout<<ans<<endl;
}