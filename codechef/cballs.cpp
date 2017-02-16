#include<iostream>
using namespace std;

int gcd(int a[]);

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int* a= new int[n];
        int count=0; //no of balls added
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=1;j<n;j++){
            if(a[j]<a[j-1]){
                count+= a[j-1]-a[j];
                a[j] = a[j-1];
            }
        }
        int g;
        do{
        g=gcd(a);
        if(g>1) break;
        else {
            
        }
        }while(1);
    }
    return 0;
}

int gcd(int a[]){
    
    
    
    return
}







