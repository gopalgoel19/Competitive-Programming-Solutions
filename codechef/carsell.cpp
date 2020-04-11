#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        
        long long int total = 0;
        long long int mod = 1000000007;

        for(int i=n-1;i>=0;i--){
            int depriciation = n -1 - i;
            total += max(v[i] - depriciation,0);
            total %= mod;
        }
        cout<<total<<endl;
    }
    return 0;
} 