#include <bits/stdc++.h>
using namespace std;

int convert(string &s){
	int v=s[0]-'0';
	v*=10;
	v+= s[1]-'0';
	v*= pow(10,s[3]-'0');
	return v;
}

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		string s;
		cin>>s;
		int n = convert(s);
		if(n==0) break;
		int x = log2(n);
		int y = pow(2,x);
		int diff = n-y;
		cout<< 1 + diff*2 << endl;
	}
}