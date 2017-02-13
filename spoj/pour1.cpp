#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> Pair;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c>a && c>b) {
            cout<<-1<<endl;
            continue;
        } 
        int s=0;
        queue<Pair> q;
        Pair p1 = make_pair(0,0);
        q.push(p1);
        s=0;
        map< Pair ,int> m;
        m[p1]=s;
        Pair ans;
        bool found=false;
        while(!q.empty()){
            //cout<<s<<endl;
            int n=q.size();
            while(n--){
                Pair t=q.front();
                q.pop();
                int v1=t.first;
                int v2=t.second;
                //cout<<v1<<" "<<v2<<endl;
                if(v1==c || v2==c) {
                    ans=t;
                    found=true;
                    break;
                }
                if(v1==0){
                    t = make_pair(a,v2);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 1"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
                if(v2==0){
                    t = make_pair(v1,b);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 2"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
                if(v1==a){
                    t = make_pair(0,v2);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 5"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
                if(v2==b){
                    t = make_pair(v1,0);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 6"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
                if(a-v1>0 && v2>0){
                    int t_v1,t_v2;
                    if(v2<=a-v1){
                        t_v1=v1+v2;
                        t_v2=0;
                    }
                    else{
                        t_v1=a;
                        t_v2=v2-(a-v1);
                    }
                    t = make_pair(t_v1,t_v2);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 3"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
                if(b-v2>0 && v1>0){
                    int t_v1,t_v2;
                    if(v1<=b-v2){
                        t_v2=v2+v1;
                        t_v1=0;
                    }
                    else{
                        t_v2=b;
                        t_v1=v1-(b-v2);
                    }
                    t = make_pair(t_v1,t_v2);
                    if(m.find(t)==m.end()) {
                        //cout<<"g 4"<<endl;
                        q.push(t);
                        m[t]=s+1;
                    }
                }
            }
            if(found) break;
            s++;
        }
        if(found) cout<<m[ans]<<endl;
        else cout<<-1<<endl;
        m.clear();
    }
    return 0;
}
