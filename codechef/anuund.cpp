#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int* a = new int[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        int* b = new int[n];
        for(int i=0,k=0;i<n;i=i+2){
            b[i]=a[k];
            k++;
        }
        for(int i=1,k=n-1;i<n;i=i+2){
            b[i]=a[k];
            k--;
        }
        for(int j=0;j<n;j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
}