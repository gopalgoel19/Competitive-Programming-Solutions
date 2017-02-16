#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		cout<<int(log2(n))<<endl;
	}
	return 0;
}