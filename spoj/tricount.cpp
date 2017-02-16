#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n;
		cin>>n;
		cout<<(n*(n+2)*(n*2+1))/8<<endl;
	}
	
}