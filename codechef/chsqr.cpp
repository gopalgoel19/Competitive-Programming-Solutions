#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		vector<vector<int> > v(n);
		for(int i=0;i<n;i++) v[i].resize(n);
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=(i+n/2)%n;count<n;j++){
				count++;
				j%=n;
				v[i][j]=count;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
			cout<<endl;
		}
	}
}