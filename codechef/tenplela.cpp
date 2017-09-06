#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l;
		cin>>l;
		int* a = new int[l];
		for(int i=0;i<l;i++) cin>>a[i];
		bool ans=true;
		if(l%2==0) ans=false;
		else{
			int e=1;
			for(int i=0;i<l/2;i++){
				if(a[i]==e && a[l-i-1]==e) e++;
				else {
					ans=false;
					break;
				}
			}
			if(a[l/2] != l/2+1) ans=false;
		}
		if(ans) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}