#include <iostream>
using namespace std;

int main(){
	while(true){
		long long int x;
		cin>>x;
		if(x==0) break;
		long long int s= (x*(x+1)*(2*x+1))/6;
		cout<<s<<endl;
	}
}