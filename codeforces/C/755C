#include<bits/stdc++.h>
using namespace std;
map<int, vector<int> > mp;
vector< bool> b(10000,0);
vector<bool>visited(100000,0);

void dfs(long int n){
	visited[n]=true;
	
	for(int i=0;i<mp[n].size();i++){
		if(!visited[mp[n][i]])
			dfs(mp[n][i]);
	}
}

int main(){
	long int n,i,num,cou=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>num;		
		mp[i].push_back(num);
		mp[num].push_back(i);		
	}
	
//	for(i=1;i<=n;i++){
//		for(int j=0;j<mp[i].size();j++)
//			cout<<mp[i][j]<<" ";
//		cout<<endl;
//	}
	
	for(i=1;i<=n;i++){
		
		if(!visited[i]){
			cou++;
			dfs(i);
		}
	}
	cout<<cou;
	
}
