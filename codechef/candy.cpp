#include <iostream>
#include <vector>
using namespace std;

int main(){
        long long int n,x;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=1;i<n;i++){
                v[i]+=2*v[i-1];
        }
        //for(int i=0;i<n;i++) cout<<v[i]<<" ";
        //cout<<endl;
        cin>>x;
        vector<long long int> ans;
        for(int i=n-1;i>=0;i--){
                if(v[i]<=x) {
                        x-=v[i];
                        ans.push_back(v[i]);
                }
        }
        if(x==0){
                for(int i=ans.size()-1;i>=0;i--){
                        //cout<<ans[i]<<" ";
                }
                cout<<"YES"<<endl;
        }
        else{
                cout<<"NO"<<endl;
        }
}