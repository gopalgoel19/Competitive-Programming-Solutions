#include <bits/stdc++.h>
using namespace std;

int h,w;
int max_l=0,m_i=-1,m_j=-1;
void dfs(vector<string> &v,vector<vector<int> > &visited,int i,int j,int m){
	if(i>=h || i<0 || j>=w || j<0 || v[i][j]=='#') return;
	if(visited[i][j]==0){
		if(m>max_l) {
			max_l=m;
			m_j=j;
			m_i=i;
		}
		visited[i][j]=1;
		dfs(v,visited,i+1,j,m+1);
		dfs(v,visited,i,j+1,m+1);
		dfs(v,visited,i,j-1,m+1);
		dfs(v,visited,i-1,j,m+1);
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		cin>>w>>h;
		vector<string> v(h);
		vector<vector<int> > visited(h,vector<int>(w,0));
		for(int i=0;i<h;i++) cin>>v[i];
		int max=0; 
		bool temp=false;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(v[i][j]=='.') {
					max_l=0;
					m_i=-1;
					m_j=-1;
					dfs(v,visited,i,j,1);
					temp=true;
					break;
				}
				if(temp) break;
			}
		}
		max_l=0;
		for(int i=0;i<h;i++) {
			for(int j=0;j<w;j++) {
				visited[i][j]=0;
			}
		}
		dfs(v,visited,m_i,m_j,1);
		max=max_l;
		max--;
		if(max<0) max=0;
		cout<<"Maximum rope length is "<<max<<"."<<endl;
	}
}