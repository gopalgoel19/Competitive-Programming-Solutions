#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    int E,N;
    cin>>E>>N;
    ll count=0;
    if(E==1 && N==1){
        cout<<"0"<<endl;
        return 0;
    }
    while(E>0 && N>0){
        if(E>=N){
            E-=2;N--;
        }
        else{
            E--;N-=2;
        }
        count++;        
        if(E==1 && N==1)
            break;  
    }
    cout<<count<<endl;
}