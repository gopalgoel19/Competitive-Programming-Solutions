#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		float b;
		cin>>b;
		int n = b/2;
		n=n-1;
		if(n<0) cout<<0<<endl;
		else cout << (n*(n+1))/2<<endl;
	}
}