#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,k1,k2,t;
    list<int> A,B;
    map<list<int>,list<int> > m; 
    cin>>N;
    cin>>k1;
    for(int i=0;i<k1;i++){
        cin>>t;
        A.push_back(t);
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        cin>>t;
        B.push_back(t);
    }
    int a,b,c=0;
    while(A.size()!=0 && B.size()!=0)
    {
        a=A.front();A.pop_front();
        b=B.front();B.pop_front();
        if(a>b){
            A.push_back(b);A.push_back(a);
        }
        else{
            B.push_back(a);B.push_back(b);
        }
        if(m.find(A)!=m.end() && m[A]==B){
            cout<<"-1"<<endl;
            break;
        }
        else{
            m[A]=B;
            c++;
        }
    }   
    if(A.size()==0)
        cout<<c<<" "<<2<<endl;
    else if(B.size()==0)
        cout<<c<<" "<<1<<endl;
}