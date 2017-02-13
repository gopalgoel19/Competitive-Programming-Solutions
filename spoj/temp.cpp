#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
		int t = a%b; a = b; b = t;
	}
	return a;
}

int main(){
	int a=12,b=5;
	char c=100;
	char d = (c+c);
	d = d/4;
	printf("%d %c\n",d,d);
	//cout<<a/gcd(a,b)*b<<endl;
}