#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int result=n;
		for(int i=2;i*i<=n;i++){
			if (n%i==0){
				result -= result/i;
			 	while(n%i==0) n/=i;
			}
		}	
		cout<<result<<endl;
	}
}