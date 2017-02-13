#include <iostream>
#include <algorithm>
using namespace std;

void print(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,ki,e,m;
		cin>>n>>ki>>e>>m;
		int* a = new int[n-1];
		for(int j=0;j<n-1;j++){
			int temp=0;
			for(int k=0;k<e;k++){
				int temp2;
				cin>>temp2;
				temp+=temp2;
			}
			a[j]=temp;
		}
		int num=0;
		for(int k=0;k<e-1;k++){
			int temp;
			cin>>temp;
			num+=temp;
		}
		//print(a,n-1);
		sort(a,a+n-1);
		//print(a,n-1);
		//cout<<num<<endl;
		int chal=a[n-1-ki];
		int diff=chal-num + 1;
		if (diff<=m) {
			if(diff<=0) cout<<0<<endl;
			else cout<<diff<<endl;
		}
		else cout<<"Impossible"<<endl;
	}
}