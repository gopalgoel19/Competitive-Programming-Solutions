#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans = n*(n+1);
		long long int p;
		if(n%2) p = n*((n-1)/2);
		else p = (n/2)*(n-1);
		ans+=p;
		cout<<ans%1000007<<endl;
	}
}