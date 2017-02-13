#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        long long int* a1 = new long long int[n];
        long long int* a2 = new long long int[n];
        for(int j=0;j<n;j++){
            cin>>a1[j];
        }
        for(int j=0;j<n;j++){
            cin>>a2[j];
        }
        if(k>0){
            int max=0;
            for(int j=1;j<n;j++){
                if(abs(a2[j])>abs(a2[max])) max=j;
            }
            if(a2[max]==0) {}
            else if(a2[max]>0){
                a1[max]+=k;
            }
            else {
                a1[max]-=k;
            }
        }
        long long int sum=0;
        for(int j=0;j<n;j++){
            sum+=(a1[j]*a2[j]);
        }
        cout<<sum<<endl;
    }
}