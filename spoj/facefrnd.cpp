#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	map<int,int> m;
	while(n--){
		int f;
		cin>>f;
		m[f]=1;
		int t;
		cin>>t;
		while(t--){
			int num;
			cin>>num;
			if(m.find(num)==m.end()){
				m[num]=2;
			}
		}
	}
	map<int,int>::iterator i;
	int c=0;
	for(i=m.begin();i!=m.end();i++){
		if(i->second==2) c++;
	}
	cout<<c<<endl;
}