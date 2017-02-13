#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int h,a;
		cin>>h>>a;
		if(h==0 || a==0) {
			cout<<0<<endl;
			continue;
		}
		h+=3;
		a+=2;
		int t=1;
		while(h>0 && a>0){
			if(h>5 && a>10){
				h-=2;
				a-=8;
			}
			else if(h>20 && a>0){
				h-=17;
				a+=7;
			}
			else{
				cout<<t<<endl;
				break;
			}
			t+=2;
		}
	}
}