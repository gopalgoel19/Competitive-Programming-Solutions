#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string ans = "None";
		int a=0,b=0;
		for(int i=0; i<s.size();++i){
		 	if(s[i]=='A') a++;
		 	else b++;
		}
		if(a==2) ans="A";
		else if(b==2) ans="B";
		if(ans=="None"){
			for(int i=0;i<s.size()-1;++i){
				if(s[i]==s[i+1] && (i==0 || s[i]!=s[i-1]) && (i==s.size()-1 || s[i]!=s[i+2])){
					s.erase(i,1);
					ans=s;
					break;
				}
			}	
		}
		if(ans=="None") cout<<-1<<endl;
		else cout<<ans<<endl;
	}
}