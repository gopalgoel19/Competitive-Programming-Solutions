#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		cin>>m;
		vector<int> w(m);
		for(int i=0;i<m;i++) cin>>w[i];
		sort(v.begin(), v.end());
		sort(w.begin(), w.end());
		int i=0,j=0;
		int diff=abs(v[0]-w[0]);
		bool temp=v[0]>w[0];
		while(i<n && j<m){
			if(temp){
				while(w[j]<v[i]){
					j++;
					if(j==m) break;
					if(abs(w[j]-v[i])<diff) diff = abs(w[j]-v[i]);
				}
			}
			else{
				while(v[i]<w[j]){
					i++;
					if(i==n) break;
					if(abs(w[j]-v[i])<diff) diff = abs(w[j]-v[i]);
				}
			}
			if(v[i]==w[j]) break;
			temp=!temp;
		}
		cout<<diff<<endl;
	}
	
}