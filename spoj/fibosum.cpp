#include <bits/stdc++.h>
using namespace std;

int md(long long int n){
	return n%1000000007;
}

void multiply(long long int f[2][2],long long int m[2][2]){
	long long int w = md(f[0][0] * m[0][0]) + md(f[0][1] * m[1][0]);
	long long int x = md(f[0][0] * m[0][1]) + md(f[0][1] * m[1][1]);
	long long int y = md(f[1][0] * m[0][0]) + md(f[1][1] * m[1][0]);
	long long int z = md(f[1][0] * m[0][1]) + md(f[1][1] * m[1][1]);

	f[0][0]=md(w);
	f[0][1]=md(x);
	f[1][0]=md(y);
	f[1][1]=md(z);
}

void power(long long int f[2][2], int n){
	if(n==0 || n==1) return;
	long long int m[2][2] = {{1,1},{1,0}};
	power(f,n/2);
	multiply(f,f);
	if(n%2) multiply(f,m); 
}

int fib(int n){
	if(n==0) return 0;
	long long int f[2][2] = {{1,1},{1,0}};
	power(f,n-1);
	return int(f[0][0]);
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x = fib(n+1)-1;
		int y = fib(m+2)-1;
		int z = y-x;
		if(z<0) z+=1000000007;
		cout<<z<<endl;
	}
}