#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l;
		cin>>l;
		string s;
		cin>>s;
		char expected = 'H';
		bool ans=true; 
		for(int i=0;i<l;i++){
			if(s[i]=='.') continue;
			else if(s[i]==expected && expected=='H') expected='T';
			else if(s[i]==expected && expected=='T') expected='H';
			else{
				ans = false;
				break;
			}
		}
		if(ans && expected=='H') cout<<"Valid"<<endl;
		else cout<<"Invalid"<<endl;
	}
}