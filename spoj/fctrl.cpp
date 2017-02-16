// trailing zeros in a factorial
#include <iostream>
using namespace std;

int factZeros(int n){
	int ans=0;
	int t=5;
	while(t<=n){
		ans += n/t;
		t=t*5;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<factZeros(n)<<endl;
	}
	return 0;
}