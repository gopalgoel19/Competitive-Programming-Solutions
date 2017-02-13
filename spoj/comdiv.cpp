#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int div(int n){
	int c=0;
	int i=0;
	for(i=1;i*i<n;i++){
		if(n%i==0) c+=2;
	}
	if(i*i==n) c++;
	return c;
}

int main(){ 
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a<b) swap(a,b);
		while(b!=0){
			int t=a;
			a=b;
			b=t%b;
		}
		printf("%d\n",div(a));;
	}
	
}