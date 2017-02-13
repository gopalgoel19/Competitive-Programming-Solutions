#include <iostream>
#include <algorithm>
using namespace std;

void print(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int modu(int a){
	if (a<0) {
		return 1000000007+a;
	}
	else return a%1000000007;
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		long long int* a = new long long int[n];
		for(int j=0;j<n;j++) cin>>a[j];
		sort(a,a+n);
		long long int p=1;
		long long int p2=1;
		int li=0;
		int ri=n-1;
		if(k%2==1) {
			p=modu(a[n-1]);
			k--;
			ri--;
		}
		//print(a,n);
		while(k){
			long long int pro1=(a[li]*a[li+1]);
			long long int pro2=(a[ri]*a[ri-1]);
		//	cout<<pro1<<" "<<pro2<<endl;
			if(pro2>pro1){
				pro2 = modu(pro2);
				p2=modu(p2*pro2);
				ri=ri-2;
				if (pro1<0) li++;
			}
			else{
				pro1 = modu(pro1);
				p2=modu(p2*pro1);
				li=li+2;
			}
			k=k-2;
		}
		p=modu(p*p2);
		cout<<p<<endl;
	}
}