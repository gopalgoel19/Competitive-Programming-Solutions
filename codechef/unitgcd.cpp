#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<"\n";
            cout<<1<<" "<<1<<"\n";
        }
        else{
            cout<<n/2<<endl;
            if(n==2){
                cout<<2<<" "<<1<<" "<<2<<"\n";
            }
            else{
                cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
                for(int i = 4;i<=n;i+=2){
                    if(i+1 <=n) cout<<2<<" "<<i<<" "<<i+1;
                    else cout<<1<<" "<<i;
                    cout<<"\n";
                }
            }
        }
    }
    return 0;
} 