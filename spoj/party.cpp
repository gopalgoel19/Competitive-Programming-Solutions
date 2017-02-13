//0/1-Knapsack
#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int,int> &p1, pair<int,int> &p2){
	if (p1.first == p2.first) return p1.second<p2.second;
	else return p1.first < p2.first;
}

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		int b,n; // b=budget n= parties
		cin>>b>>n;
		if(b==0 && n==0) break;
		int i=0;
		vector< pair<int,int> > cf(n);
		while(i<n){
			int c,f;
			cin>>c>>f;
			cf[i].first=c;
			cf[i].second=f;
			i++;
		}
		sort(cf.begin(),cf.end(),mycomp);
		vector< vector<int> > m(n);
		for(int i=0;i<n;i++) m[i].resize(b+1);
		for(int i=0;i<n;i++) m[i][0]=0;
		for(int j=1;j<b+1;j++) {
			if(j<cf[0].first) m[0][j]=0;
			else m[0][j]=cf[0].second;
		}
		int max_b=0,max_v=0;
		for(int i=1;i<n;i++){
			for(int j=1;j<=b;j++){
				if(j<cf[i].first) m[i][j]=m[i-1][j];
				else{
					int val = cf[i].second;
					int r = j - cf[i].first;
					val+= m[i-1][r];
					m[i][j] = max(val,m[i-1][j]);
				}
				if(m[i][j]==max_v && j<max_b) max_b=j;
				else if(m[i][j]>max_v) {
					max_b=j;
					max_v=m[i][j];
				}
			}
		}
		cout<<max_b<<" "<<max_v<<endl;
	}
}