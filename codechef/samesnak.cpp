#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int* a = new int[4];
		int* b = new int[4];
		for(int i=0;i<4;i++) cin>>a[i];
		for(int i=0;i<4;i++) cin>>b[i];
		bool ans = false;
		if(a[0]==a[2]){ // vertical
			if(a[1]>a[3]) swap(a[1],a[3]);
			if(b[1]>b[3]) swap(b[1],b[3]);
			if( (a[1] < b[1] && a[3]>b[1])  ||  (b[1]<a[1] && b[3]>a[1]) ){
				ans = true;
				// cout<<"yyy"<<endl;
			}
			else if( 	a[0]==b[0] && a[1]==b[1]
				||	a[0]==b[2] && a[1]==b[3]
				||	a[2]==b[0] && a[3]==b[1]
				|| 	a[2]==b[2] && a[3]==b[3]
			){
				ans=true;
			}	
			else ans=false;
		}
		else{ // horizontal
			if(a[1]==b[1] && a[3]==b[3]){
				if(a[0]>a[2]) swap(a[0],a[2]);
				if(b[0]>b[2]) swap(b[0],b[2]);
				if( (a[0] < b[0] && a[2]>b[0])  ||  (b[0]<a[0] && b[2]>a[0]) ){
					ans = true;
					// cout<<"yyy"<<endl;
				}
			}
			else if( 	a[0]==b[0] && a[1]==b[1]
				||	a[0]==b[2] && a[1]==b[3]
				||	a[2]==b[0] && a[3]==b[1]
				|| 	a[2]==b[2] && a[3]==b[3]
			){
				ans=true;
			}	
			else ans=false;	
		}
		if(ans) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}