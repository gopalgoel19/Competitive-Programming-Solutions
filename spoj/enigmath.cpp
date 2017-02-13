#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a<b) swap(a,b);
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x=gcd(a,b);
		cout<<b/x<<" "<<a/x<<endl;
	}
	
}