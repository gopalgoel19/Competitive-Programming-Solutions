#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int k;
		cin>>k;
		long long int a=192;
		long long int b=442;
		if(k==1) cout<<a<<endl;
		else if(k==2) cout<<b<<endl;
		else{
			if(k%2==1) {
				a+= 500*(k/2);
				cout<<a<<endl;
			}
			else {
				b+= 500*(k/2-1);
				cout<<b<<endl;
			}
		}
	}
    return 0;
}