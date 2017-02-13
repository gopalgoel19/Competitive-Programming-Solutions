#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string a,b;
		cin>>a;
		cin>>b;
		bool one=false;
		bool zero=false;
		int n= a.size();
		for(int j=0;j<n;j++){
			if(a[j]=='0') zero=true;
			else one=true;
			if(zero==true && one==true) break;
		}
		if(zero==true && one==true) {
			cout<<"Lucky Chef"<<endl;
			int t0=0,t1=0,count=0;
			for(int j=0;j<n;j++){
				if(a[j]==b[j]) continue;
				if(a[j]=='1') t1++;
				else t0++;
			}
			count = t0>t1? t0:t1 ; // min of t0 or t1 -- corresponding to xor swaps
			cout<<count<<endl;
		}
		else cout<<"Unlucky Chef"<<endl;
	}
}