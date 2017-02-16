#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x = __gcd(max(m,n),min(m,n));
		cout<<(n/x)*(m/x)<<endl;
	}
}