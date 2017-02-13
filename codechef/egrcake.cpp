#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int* a = new int[n+1];
        a[0]=-1;
        for(int j=1;j<=n-m;j++){
            a[j]=j+m;
        }
        for(int j=n-m+1,i=1;j<=n;j++){
            a[j]=i++;
        }
        int count=0;
        int crawler=1;
        while(true){
            //cout<<endl<<crawler;
            if(a[crawler]==0) break;
            int temp=a[crawler];
            count++;
            a[crawler]=0;
            crawler=temp;
        }
        if(count==n) cout<<"Yes"<<endl;
        else cout<<"No "<<count<<endl;
    }       
}