#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int> > v(n);
		for(int i=0;i<n;i++){
			v[i].resize(m);
			string s;
			cin>>s;
			for(int j=0;j<m;j++){
				v[i][j]=s[j]-'0';
			}
		}
		queue<pair<int,int> > q;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(v[i][j]==1){
					q.push(make_pair(i,j));
					v[i][j]=0;
				}
				else v[i][j]=INT_MAX;
			}
		}
		while(!q.empty()){
			pair<int,int> p = q.front();
			q.pop();
			int i=p.first; int j=p.second;
			if(i+1<n){
				if(v[i+1][j]>v[i][j]+1){
					v[i+1][j]=v[i][j]+1;
					q.push(make_pair(i+1,j));
				}
			}
			if(i-1>-1){
				if(v[i-1][j]>v[i][j]+1){
					v[i-1][j]=v[i][j]+1;
					q.push(make_pair(i-1,j));
				}
			}
			if(j+1<m){
				if(v[i][j+1]>v[i][j]+1){
					v[i][j+1]=v[i][j]+1;
					q.push(make_pair(i,j+1));
				}
			}
			if(j-1>-1){
				if(v[i][j-1]>v[i][j]+1){
					v[i][j-1]=v[i][j]+1;
					q.push(make_pair(i,j-1));
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}