#include <bits/stdc++.h>
using namespace std;

int h,w;

int dfs(vector<string> &v,vector<vector<int> > &p, int i,int j, int l){
	if(i>=h || i<0 || j>=w || j<0) return 0;
	if(p[i][j]!=-1 && v[i][j]=='A'+l) return p[i][j];
	if(v[i][j]=='A'+l){
		vector<int> m;
		m.push_back(1 + dfs(v,p,i+1,j,l+1));
		m.push_back(1 + dfs(v,p,i+1,j+1,l+1));
		m.push_back(1 + dfs(v,p,i+1,j-1,l+1));
		m.push_back(1 + dfs(v,p,i,j+1,l+1));
		m.push_back(1 + dfs(v,p,i,j-1,l+1));
		m.push_back(1 + dfs(v,p,i-1,j,l+1));
		m.push_back(1 + dfs(v,p,i-1,j+1,l+1));
		m.push_back(1 + dfs(v,p,i-1,j-1,l+1));
		sort(m.begin(),m.end());
		p[i][j]=m[7];
		return m[7];
	}
	else {
		return 0;
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	int z=0;
	while(true){
		z++;
		cin>>h>>w;
		if(h==0) break;
		vector<string> v(h);
		vector<vector<int> > p(h);
		for(int i=0;i<h;i++) p[i].resize(w,-1);
		for(int i=0;i<h;i++) cin>>v[i];
		int max=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(v[i][j]=='A') {
					int x = dfs(v,p,i,j,0);
					if (x>max) max=x;
				}
			}
		}
		cout<<"Case "<<z<<": "<<max<<endl;
	}
}