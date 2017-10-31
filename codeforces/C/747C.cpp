#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class node{
    public:
        int t,k,d;
        node(int tt,int kk,int dd){
            t=tt;
            k=kk;
            d=dd;
        }
};
int main(){
    int N,Q,t,k,d;
    cin>>N>>Q;
    queue<node> job;
    while(Q--){
        cin>>t>>k>>d;
        job.push(node(t,k,d));
    }
    job.push(node(0,0,0));
    node j = job.front();job.pop();
    vector<int> v(N+1,0);
    for(int t=1;;t++){
        //cout<<"ho"<<endl;
        if(t==j.t){
            //we have to alocate job
            int c=0,s=0;
            for(int i=1;i<v.size();i++){
                if(v[i]==0)
                    c++;
            }
            if(c<j.k)
                cout<<"-1"<<endl;
            else{
                //cout<<"will allocate bro "<<endl;
                for(int i=1;i<v.size();i++){
                    if(j.k && v[i]==0){
                        v[i]=j.d;
                        s+=i;
                        j.k--;
                    }
                }
                cout<<s<<endl;
            }
            j = job.front();job.pop();
        }
        //dec time in v
        for(int i=1;i<v.size();i++){
            if(v[i]>0)
                v[i]--;
        }
        if(j.t==0)
            break;
    }
}