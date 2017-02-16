#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int min=100000;
		for(int i=0;i<n;i++) {
			long long int temp = 0;
			cin>>temp;
			if(temp<min) min = temp;
		}
		cout<<min*(n-1)<<endl;
	}
}