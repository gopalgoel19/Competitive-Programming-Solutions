#include <bits/stdc++.h>
using namespace std;

int maxi(int a,int b,int c){
	if(a>b){
		if(a>c) return a;
		else return c;
	}
	if(b>c) return b;
	else return c;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		if(c==1){
			int ans=0;
			for(int i=0;i<r;i++){
				int tt;
				cin>>tt;
				ans+=tt;
			}
			cout<<ans<<endl;
			continue;
		}
		vector< vector<int> > v(r);
		v[0].resize(c);
		for(int j=0;j<c;j++){
			cin>>v[0][j];
		}
		for(int i=1;i<r;i++){
			v[i].resize(c);
			for(int j=0;j<c;j++){
				cin>>v[i][j];
				if(j==0) v[i][j] += max(v[i-1][j],v[i-1][j+1]);
				else if(j==c-1) v[i][j] += max(v[i-1][j],v[i-1][j-1]);
				else v[i][j] += maxi(v[i-1][j],v[i-1][j+1],v[i-1][j-1]);
			}
		}
		int ans=v[r-1][0];
		for(int j=0;j<c;j++){
			if(v[r-1][j]>ans) ans=v[r-1][j];
		}
		cout<<ans<<endl;
	}
}