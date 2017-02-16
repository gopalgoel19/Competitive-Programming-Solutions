#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			if(m.find(t)==m.end()) m[t]=1;
			else m[t]+=1;
		}
		n = n/2;
		map<int,int>::iterator i;
		bool temp=true;
		for(i=m.begin();i!=m.end();i++){
			if((i->second)>n) {
				cout<<"YES "<<i->first<<endl;
				temp=false;
				break
			}
		}
		if(temp) cout<<"NO"<<endl;
	}
	
}