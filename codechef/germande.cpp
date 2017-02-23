#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main(){
        int t;
        cin>>t;
        while(t--){
                int o1,o2;
                cin>>o1>>o2;
                int n=o1*o2;
                vector<int> v(n);
                vector<ii> p(o1);
                for(int i=0;i<n;i++) cin>>v[i];
                        int cc1=0,cc0=0;
// cout<<"1st iteration"<<endl;
                for(int i=0;i<n;i+=o2){
                        int c0=0;       
                        int c1=0;
                        for(int j=0;j<o2;j++){
                                if(v[i+j]==0) c0++;
                                else c1++;
                        }
                        p[i/o2].first = c0;
                        p[i/o2].second = c1;
                        cout<<c0<<" "<<c1<<endl;
                        if(c1>c0) cc1++;
                        else cc0++;
                }
                cout<<endl;
                bool ans=false;
                if(cc1>cc0) {
                        ans=true;
// cout<<"1st"<<endl;
                }
                else if(o1==1 || o2==1){}
                        else{
                                cc1=0;
                                cc0=0;
                                for(int i=1;i<o2;i++){
                                        int c0=0,c1=0;
                                        if(v[i-1]==0) {
                                                p[0].first -=1;
// cout<<"i-1 is 0"<<endl;
                                        }
                                        else p[0].second -= 1;
                                        if(v[i+o2-1]==0) {
                                                p[0].first +=1;
// cout<<"i+1 is 0"<<endl;
                                        }                                       
                                        else p[0].second += 1; 
                                        c0 = p[0].first;
                                        c1 = p[0].second;
                                        if(c1>c0) cc1++;
                                        else cc0++;
                                        cout<<c0<<" "<<c1<<endl;
                                        int j=(i+o2)%n;
                                        while(j!=i){
                                                int x = j/o2;
                                                if(v[j-1]==0) p[x].first -=1;
                                                else p[x].second -= 1;
                                                if(v[(j+o2-1)%n]==0) p[x].first +=1;
                                                else p[x].second += 1;
                                                c0 = p[x].first;
                                                c1 = p[x].second;
                                                if(c1>c0) cc1++;
                                                else cc0++;
                                                cout<<c0<<" "<<c1<<endl;
                                                j = (j + o2)%n;
                                        }
                                        cout<<endl;
                                        if(cc1>cc0){
                                                ans=true; 
                                                break;
                                        }          
                                }
                        }
                        if(ans) cout<<"1"<<endl;
                        else cout<<"0"<<endl;
                }
        }
/*
*/