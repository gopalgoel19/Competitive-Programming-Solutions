//factorial of n upto 100
#include <iostream>
#include <vector>
using namespace std;

void factorial(int n){
	if(n<2) {
		cout<<1<<endl;
		return;
	}
	vector<int> v;
	v.push_back(1);
	for(int i=2;i<=n;i++){
		int size=v.size();
		int carry=0;
		for(int j=0;j<size;j++){
			int p = v[j]*i + carry;
			v[j] = p%10;
			carry= p/10; 
		}
		while(carry){
			int p=carry;
			v.push_back(p%10);
			carry = p/10;
		}
	}
	int size=v.size();
	for(int i=size-1;i>=0;i--){
		cout<<v[i];
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		factorial(n);
	}
	return 0;
}