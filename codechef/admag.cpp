#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int count=0;
		long long int i=1,n,j=1;
		cin>>n;
		while(i<=n){
			long long int temp=i;
			i+=j;
			j=temp;
			count++;
		}
		cout<<count<<endl;
	}
}