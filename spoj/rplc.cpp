#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		vector<long long int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		long long int c=0;
		long long int e=0;
		for(int i=0;i<n;i++){
			e+=v[i];
			if(e<=0){
				c+=-e + 1;
				e=1;
			}
		}
		if(c==0) c=1;
		cout<<"Scenario #"<<k+1<<": "<<c<<endl;
	}
}