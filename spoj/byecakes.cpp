#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		int a[8];
		int b[8];
		for(int i=0;i<8;i++) cin>>a[i];
		if(a[0]==-1) break;
		int max=0;
		for(int i=0;i<4;i++){
			b[i]=a[i]/a[i+4];
			a[i]=a[i]%a[i+4];
			if(b[i]>=max) {
				max=b[i];
				if(a[i]) max++;
			}
		}
		for(int i=0;i<4;i++){
			cout<<((max-b[i])*a[i+4])-a[i]<<" ";
		}
		cout<<endl;
	}
	
}