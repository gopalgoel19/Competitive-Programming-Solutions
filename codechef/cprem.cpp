#include <bits/stdc++.h>
using namespace std;

int m=1000000007;

long long int power(long long int a,long long int b){
	if(b==1) return a;
	else {
		long long int t = power(a,b/2)%m;
		t = (t*t)%m;
		if (b%2==1) t=(t*a)%m;
		return t;
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		long long int n;
		cin>>n;
		if(n==1) {
			cout<<0<<endl;
			continue;
		}
		int ans = power(2,n-1)-2;
		if(ans<0) ans+=m;
		else cout<<ans<<endl;
	}
}