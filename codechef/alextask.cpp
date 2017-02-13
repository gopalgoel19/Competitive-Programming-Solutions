#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
	if(b>a) {
		long long int t=a;
		a=b;
		b=t;
	}
	while(b) {long long int t = a%b; a=b; b=t;}
	return a; 
}

long long int lcm(long long int a,long long int b){
	return a/gcd(a,b)*b;
}


int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		long long int min=LLONG_MAX;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				long long int t=lcm(v[i],v[j]);
				if(t<min) min=t;
			}
		}
		cout<<min<<endl;
	}
}