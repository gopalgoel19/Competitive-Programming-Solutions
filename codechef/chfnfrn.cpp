#include <bits/stdc++.h>
using namespace std;

enum{unvisited,visited};
enum{red,blue};

bool checkBipartite(vector<vector<int> > &v, vector<int> &state ,vector<int> &color, int i){
	bool ans=true;
	for(int j=0;j<v[i].size();j++){
		if(state[ v[i][j] ]==unvisited){
			state[ v[i][j] ] = visited;
			color[ v[i][j] ] = !color[i];
			ans = ans && checkBipartite(v,state,color,v[i][j]);
		}
		else{
			if (color[v[i][j]]==color[i]) ans=false;
		}
		if (ans==false) break;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		int n,m;
		cin>>n>>m;
		vector<vector<int> >  v(n+1);
		for(int i=0;i<m;i++){
			int t1,t2;
			cin>>t1>>t2;
			v[t1].push_back(t2);
			v[t2].push_back(t1);
		}

		//compliment
		for(int i=1;i<=n;i++){
			vector<bool> b(n+1,true);
			b[i]=false;
			for(int j=v[i].size()-1;j>=0;j--){
				b[v[i][j]]=false;
				v[i].pop_back();
			}
			for(int j=1;j<=n;j++){
                if(b[j]) {
                	v[i].push_back(j);
         //       	cout<<i<<" "<<j<<endl;
                }
            }
		}

		vector<int> state(n+1,unvisited);
		vector<int> color(n+1);
		bool ans=true;
		for(int i=1;i<n;i++){
			if(state[i]==unvisited){
				state[i]=visited;
				color[i]=red;
				ans = ans && checkBipartite(v,state,color,i);
			}
		}
		if(ans==false) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}




