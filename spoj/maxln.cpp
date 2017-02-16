#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int i=1;
	while(i<=t){
		long long int n;
		cin>>n;
		long long int ans = 4*n*n;
		cout<<"Case "<<i<<": "<<ans<<".25"<<endl;
		i++;
	}
}