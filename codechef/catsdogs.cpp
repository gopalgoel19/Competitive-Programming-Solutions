#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int c,d,l;
		cin>>c>>d>>l;
		if(l%4) {
			cout<<"no"<<endl;
			continue;
		}
		else{
			l -= 4*d;
			if( c > 2*d) {
				l -= (c-2*d)*4;
				c = 2*d;
			}
			if(l>=0 && l <= 4*c) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
}