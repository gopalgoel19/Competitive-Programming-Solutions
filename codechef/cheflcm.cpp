#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long int sum=0;
        for(long long int i=1;i*i<=n;i++){
            if(n%i==0) {
                sum+=i;
                sum+=n/i;
                if(i==n/i) sum-=i;
            }
        }
        cout<<sum<<endl;
    }
} 