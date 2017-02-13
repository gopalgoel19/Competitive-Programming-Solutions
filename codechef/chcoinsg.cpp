#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		if(n%6==0) cout<<"Misha"<<endl;
		else cout<<"Chef"<<endl;
	}
}