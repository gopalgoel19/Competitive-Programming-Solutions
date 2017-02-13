#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.size()<11) cout<<s<<endl;
		else{
			int n = s.size();
			cout<<s[0]<<n-2<<s[n-1]<<endl;
		}
	}
}