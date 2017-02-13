#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

long long int f(int n){
	if(n<12) return n;
	else {
		long long int a,b,c;
		if(m.find(n/2)==m.end()) m[n/2] = f(n/2);
		a=m[n/2];
		if(m.find(n/3)==m.end()) m[n/3] = f(n/3);
		b=m[n/3];
		if(m.find(n/4)==m.end()) m[n/4] = f(n/4);
		c=m[n/4];
		return (long long)(a+b+c);
	}
}

int main(){
	int n;        
    while(scanf("%d",&n)==1) printf("%lld\n",f(n));
    return 0;
}