#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	unordered_map<int,int> m;
	m[0]=0;
	vector<int> v(500001);
	v[0]=0;
	for(int i=1;i<=500000;i++){
		int t=v[i-1] - i;
		if(t>0 && m.find(t)==m.end()){
		}
		else{
			t = v[i-1] + i;
		}
		m[t]=i;
		v[i]=t;
	}
	while(true){
		int k;
		cin>>k;
		if(k==-1) break;
		cout<<v[k]<<endl;
	}
}