#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		if(a.size()!=b.size()) {
			cout<<"No"<<endl;
		}
		else{
			bool ans=true;
			for(int i=0;i<a.size();i++){
				if(a[i]=='?' || b[i]=='?' || a[i]==b[i]) continue;
				else ans=false;
			}
			if(ans) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}