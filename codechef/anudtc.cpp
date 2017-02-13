#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		if(360%n==0) cout<<"y ";
		else cout<<"n ";
		if(n<=360) cout<<"y ";
		else cout<<"n ";
		if (n<27) cout<<"y ";
		else cout<<"n ";
		cout<<endl; 
	}
}