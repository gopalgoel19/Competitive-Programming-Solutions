#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		string s1,s2;
		cin>>s1;
		s2=s1;
		reverse(s1.begin(),s1.end());
		if(s1==s2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}