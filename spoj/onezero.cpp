#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s = "1";
		cin>>n;
		queue<pair<string,int> > q;
		pair<string,int> p = {s,1%n}, t;
		q.push(p);
		vector<bool> v(n,false);
		while(!q.empty()){
			p = q.front();
			q.pop();
			if(p.second==0) {
				cout<<p.first<<endl;
				break;
			}
			t={p.first+"0",(p.second*10+0)%n};
			if(v[t.second]==false) {
				q.push(t);
				v[t.second]=true;
			}
			t={p.first+"1",(p.second*10+1)%n};
			if(v[t.second]==false) {
				q.push(t);
				v[t.second]=true;
			}
		}
	}
}