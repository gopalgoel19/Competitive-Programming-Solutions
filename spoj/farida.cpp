#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	int i=1;
	while(t--){
		int n;
		cin>>n;
		if(n==0) {
			cout<<"Case "<<i++<<": "<<0<<endl;
			continue;
		}
		long long int inc,exc=0;
		cin>>inc;
		for(int i=1;i<n;i++){
			long long int c;
			cin>>c;
			long long int t_inc = exc+c;
			exc = max(inc,exc);
			inc = t_inc;
		}
		cout<<"Case "<<i++<<": "<<max(inc,exc)<<endl;
	}
	
}