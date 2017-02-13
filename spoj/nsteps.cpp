#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* a = new int[1000001];
	int c=0;
	for(int i=0;i<1000001;i++){
		a[i]=c;
		a[i+1]=c+1;
		c=c+4;
		i++;
	}
	while(n--){
		int x,y;
		cin>>x>>y;
		if(x==y){
			cout<<a[x]<<endl;
		}
		else if(x-2==y){
			cout<<a[x]-2<<endl;
		}
		else{
			cout<<"No Number"<<endl;
		}
	}
}