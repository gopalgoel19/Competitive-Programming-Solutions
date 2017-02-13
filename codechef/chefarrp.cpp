#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count=n; // No. of sub array equals no of elements atleast.
        int *a;
        a=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        
        for(int j=0;j<n;j++){
            long long int sum=a[j];
            long long int product=a[j];
            for(int k=j+1;k<n;k++){
                sum+=a[k];
                product*=a[k];
                if(sum==product) count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}