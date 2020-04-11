#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fillRest(vector<pair<int,int>> &v){
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(2,2));
    v.push_back(make_pair(3,3));
    v.push_back(make_pair(4,4));
    v.push_back(make_pair(5,5));
    v.push_back(make_pair(6,6));
    v.push_back(make_pair(7,7));
    v.push_back(make_pair(8,8));
    v.push_back(make_pair(7,7));
    v.push_back(make_pair(8,6));
    v.push_back(make_pair(7,5));
    v.push_back(make_pair(6,4));
    v.push_back(make_pair(5,3));
    v.push_back(make_pair(4,2));
    v.push_back(make_pair(3,1));
    v.push_back(make_pair(4,2));
    v.push_back(make_pair(5,1));
    v.push_back(make_pair(6,2));
    v.push_back(make_pair(7,3));
    v.push_back(make_pair(8,4));
    v.push_back(make_pair(7,3));
    v.push_back(make_pair(8,2));
    v.push_back(make_pair(7,1));
    v.push_back(make_pair(6,2));
    v.push_back(make_pair(5,3));
    v.push_back(make_pair(4,4));
    v.push_back(make_pair(3,5));
    v.push_back(make_pair(2,6));
    v.push_back(make_pair(1,7));
    v.push_back(make_pair(2,8));
    v.push_back(make_pair(3,7));
    v.push_back(make_pair(4,8));
    v.push_back(make_pair(3,7));
    v.push_back(make_pair(2,6));
    v.push_back(make_pair(1,5));
    v.push_back(make_pair(2,4));
    v.push_back(make_pair(1,3));
    v.push_back(make_pair(2,4));
    v.push_back(make_pair(3,5));
    v.push_back(make_pair(4,6));
    v.push_back(make_pair(5,7));
    v.push_back(make_pair(6,8));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> v;
        int r,c;
        cin>>r>>c;
        while(r!=c){
            if(r>c) {
                v.push_back(make_pair(r,c));
                r--;
                c++;
            }
            else if(c>r) {
                v.push_back(make_pair(r,c));
                c--;
                r++;
            }
        }
        while(r!=1 && c!=1){
            v.push_back(make_pair(r,c));
            r--;
            c--;
        }
        fillRest(v);
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
    return 0;
}