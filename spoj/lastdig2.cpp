#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long int b;
		cin>>a>>b;
		if(b==0) {cout<<1<<endl; continue;}
		vector<int> v;
		v.push_back(a[a.size()-1]-'0');
		long long int p=v[0];
		while(true){
			p*=v[0];
			int ld=p%10;
			if(ld==v[0]) break;
			v.push_back(ld);
			p=ld;
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