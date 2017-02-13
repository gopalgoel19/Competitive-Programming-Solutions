#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		vector<int> v1(n+1,0);
		vector<int> v2(n+1,0);
		for(int i=1;i<=n;i++){
			cin>>v1[i];
			v2[v1[i]]=i;
		}
		if(equal(v1.begin()+1,v1.end(),v2.begin()+1)){
			cout<<"ambiguous"<<endl;
		}
		else cout<<"not ambiguous"<<endl;
	}
}