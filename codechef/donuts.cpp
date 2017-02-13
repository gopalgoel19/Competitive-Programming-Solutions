#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> v(m);
		for(int i=0;i<m;i++){
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		int sum=0;
		int i;
		for(i=1;i<=m;i++){
			sum+=v[i-1];
			if(sum>=m-1-i){
				break;
			}
		}
		if(sum==m-1-i) cout<<sum<<endl;
		else cout<<m-i<<endl;
	}
}