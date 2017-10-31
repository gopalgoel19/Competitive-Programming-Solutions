#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int N;
    string s;
    cin>>N;
    while(N--){
        cin>>s;
        map<string,int>::iterator itr = m.find(s);
        if(itr == m.end()){
            m[s]=1;
            cout<<"OK"<<endl;
        }
        else{
            m[s]++;
            cout<<s<<m[s]-1<<endl;
        }
    }
}