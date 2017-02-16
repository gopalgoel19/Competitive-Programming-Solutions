#include <bits/stdc++.h>
using namespace std;

long long int nCr(long long int n, long long int r){
	if(r>n/2) r = n-r;
	long long int ans=1;
	for(int i=1;i<=r;i++){
		ans*= (n-r+i);
		ans/= i;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		cout<<nCr(n-1,n-k)<<endl;
	}
	
}