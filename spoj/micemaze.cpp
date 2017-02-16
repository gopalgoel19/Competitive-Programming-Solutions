#include <bits/stdc++.h>
using namespace std;

int spd(int s,int e, vector<vector<int> > &g){
	
}

int main(){
	ios_base::sync_with_stdio(false); 
	int n,e,t,m;
	cin>>n>>e>>t>>m;
	vector<vector<int> > g(n+1);
	for(int i=0;i<n;i++) g[i].resize(n+1);
	for(int k=0;k<m;k++){
		int a,b,c;
		cin>>a>>b>>c;
		g[a][b]=c;	
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if (spd(i,e,g)<=t) count++;
	}
}