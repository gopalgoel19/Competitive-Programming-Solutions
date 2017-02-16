#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int min=0,max=0;
		for(int i=0;i<a.size();i++){
			if(a[i]=='?' || b[i]=='?') max++;
			else if(a[i]==b[i]) {}
			else min++;
		}
		max+=min;
		cout<<min<<" "<<max<<endl;
	}
}