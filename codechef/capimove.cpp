#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ii> v;
		for(int i=1;i<=n;i++) {
			int temp;
			cin>>temp;
			v.push_back(ii(temp,i));
		}
		sort(v.begin(), v.end());
		set<int> g[n+1];
		for(int i=1;i<n;i++){
			int u,vv;
			cin>>u>>vv;
			g[u].insert(vv);
			g[u].insert(u);
			g[vv].insert(u);
			g[vv].insert(vv);
		}
		vector<int> ans(n+1,0);
		for(int i=1;i<=n;i++){
			for(int j=n-1;j>=0;j--){
				int x = v[j].second;
				if(g[i].find(x)==g[i].end()){
					ans[i]=x;
					break;
				}
			}
		}
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
}