#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n,m,d;
		cin>>n>>m>>d;
		int count=0;
		for(int i=0;i<n;i++) {
			int v;
			cin>>v;
			int mod = v%d;
			v/=d;
			if(mod==0 && v>0) v--;
			count+=v;
		}
		if(count>=m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}