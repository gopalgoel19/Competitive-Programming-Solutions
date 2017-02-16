#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int j=0;
	while(++j){
		int n;
		scanf("%d",&n);
		if(n==0) break;
		vector<vector<int> > v(n);
		for(int i=0;i<n;i++) {
			for(int j=0;j<3;j++){
				int x;
				scanf("%d",&x);
				v[i].push_back(x);			
			}
		}
		if(n==1){
			printf("%d. %d\n",j,v[0][1]);
			continue;
		}
		v[0][2] += v[0][1];
		v[1][0] += v[0][1];
		v[1][1] += min(v[1][0],min(v[0][1],v[0][2]));
		v[1][2] += min(v[0][1],min(v[1][1],v[0][2]));
		for(int i=2;i<n;i++){
			v[i][0] += min(v[i-1][0],v[i-1][1]);
			v[i][1] += min(min(v[i-1][0],v[i][0]),min(v[i-1][1],v[i-1][2]));
			v[i][2] += min(min(v[i-1][1],v[i-1][2]),v[i][1]);
		}
		printf("%d. %d\n",j,v[n-1][1]);
	}
}