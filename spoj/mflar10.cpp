#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		string s;
		getline(cin,s);
		if(s[0]=='*') break;
		transform(s.begin() ,s.end() ,s.begin() ,::tolower);
		int i=0;
		char c = s[0];
		bool ans=true;
		while(i<s.size()){
			if(s[i]==' ') i++;
			else if(s[i]!=c) {
				ans=false;
				break;
			}
			else{
				while(i+1<s.size() && s[i+1	]!=' ') i++;
				i++;
			}
		}
		if(ans) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
}