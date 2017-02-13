#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<string> v(n);
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v[i] = "A" + s + "A";
		}
		bool ans=true;
		for(int j=1;j<=m;j++){
			bool air=false;
			bool water=false;
			for(int i=n-1;i>=0;i--){
				if(v[i][j]=='A') air=true;
				if(v[i][j]=='W') water=true;
				if(v[i][j]=='B' && (air==true || water==true)){
					ans=false;
					break;
				}
				if(v[i][j]=='W' && (air==true || v[i][j-1]=='A' || v[i][j+1]=='A')){
					ans=false;
					break;
				}
			}
			if(!ans) break;
		}
		if(ans) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}