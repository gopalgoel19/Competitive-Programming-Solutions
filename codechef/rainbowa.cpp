#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		bool ans = true;
		vector<int> r;
		int c=1;
		int i=0;
		while(i<n){
			if(c==8) break;
			if(v[i]!=c) {
				ans = false;
				break;
			}
			else{
				int count=0;
				while(i<n && v[i]==c) {
					i++;
					count++;
				}
				r.push_back(count);
				c++;
			}
		}
		c=6;
		while(ans && i<n){
			if(c==0) break;
			if(v[i]!=c) {
				ans = false;
				break;
			}
			else{
				int count=0;
				while(i<n && v[i]==c) {
					i++;
					count++;
				}
				r.push_back(count);
				c--;
			}
		}
		//for(int k=0;k<r.size();k++) cout<<r[k];
		vector<int> rr = r;
		reverse(r.begin(), r.end());
		if(r!=rr || r.size()!=13) ans=false;
		if(ans) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}