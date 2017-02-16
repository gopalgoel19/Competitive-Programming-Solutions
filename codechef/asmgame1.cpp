#include <iostream>
using namespace std;

int gcd(int x, int y){
	int temp;
	if(x<y) { // interchange x and y 
		temp=x;
		x=y;
		y=temp;
	}
	while(y){
		temp= x%y;
		x=y;
		y=temp;
	}
	return x;
}

int gcdArray(int n,int a[]){
	if(n==1) return a[0];
	if(n==2) return gcd(a[0],a[1]);
	int h= n/2;
	return gcd(gcdArray(h,&a[0]), gcdArray(n-h,&a[h]));
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int* a = new int[n];
		for(int j=0;j<n;j++) cin>>a[j];
		cout<<gcdArray(n,a)<<endl;
	}
}