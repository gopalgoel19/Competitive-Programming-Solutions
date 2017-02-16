#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> m;
	int n=1;
	m[n]=1;
	int i=1;
	while(n<=1000000000){
		n+= i*6;
		m[n]=i+1;
		i++;
	}
	while(true){
		int t;
		cin>>t;
		if(t==-1) break;
		if(m.find(t)!=m.end()) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
}