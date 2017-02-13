#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b==0) {cout<<1<<endl; continue;}
		vector<int> v;
		v.push_back(a%10);
		long long int p=a;
		while(true){
			p*=a;
			int ld=p%10;
			if(ld==v[0]) break;
			v.push_back(ld);
		}
		int l=v.size();
		b=b%l;
		if(b==0){
			cout<<v[l-1]<<endl;
		}
		else{
			cout<<v[b-1]<<endl;
		}
	}
}