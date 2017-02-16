#include <iostream>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	int* a = new int[n];
	int* b = new int[q];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<q;i++) cin>>b[i];
	int min=a[0];
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	for(int i=0;i<q;i++){
		if(b[i]>=min && b[i]<=max) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}