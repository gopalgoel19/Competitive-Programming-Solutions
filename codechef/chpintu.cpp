#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> p(n),f(n),cost(m+1,-1);
        for(int i=0;i<n;i++) cin>>f[i];
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) {
            if(cost[f[i]]==-1) cost[f[i]]=0;
            cost[f[i]]+= p[i];
        }
        int minCost = -1;
        for(int i=1;i<=m;i++){
            if(cost[i]==-1) continue;
            if(minCost==-1) minCost = cost[i];
            else{
                minCost = min(minCost,cost[i]);
            }
        }
        cout<<minCost<<endl;

    }
    return 0;
}