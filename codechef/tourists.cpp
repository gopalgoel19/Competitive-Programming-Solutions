#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

void tour(int s, vector<set<ii> > &g, vector<set<ii> > &h, vector<ii> &e){
	while(!g[s].empty()){
		ii t = *(g[s].begin());
		g[s].erase(t);
		h[t.first].erase(ii(s,t.second));
		tour(t.first,g,h,e);
	}
	while(!h[s].empty()){
		ii t = *(h[s].begin());
		h[s].erase(t);
		g[t.first].erase(ii(s,t.second));
		swap(e[t.second].first,e[t.second].second);
		tour(t.first,g,h,e);
	}
}

int main(){
	int n,e;
	cin>>n>>e;
	vector<set<ii> > g(n+1);
	vector<set<ii> > h(n+1);
	vector<ii> ed;
	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;
		ed.push_back(ii(a,b));
		g[a].insert(ii(b,i));
		h[b].insert(ii(a,i));
	}
	bool ans=true;
	for(int i=1;i<=n;i++){
		int x = g[i].size();
		int y = h[i].size();
		if((x+y)%2 || x+y==0) {ans=false; break;}
	}
	if(ans==false) {
		cout<<"NO"<<endl;
	}
	else{
		tour(1,g,h,ed);
		for(int i=1;i<=n;i++) {
			if(!g[i].empty() || !h[i].empty()){
				ans=false;
				break;
			}
		}
		if(!ans) cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl;
			for(int i=0;i<e;i++){
				cout<<ed[i].first<<" "<<ed[i].second<<endl;
			}
		}
	}
}