#include <bits/stdc++.h>
using namespace std;

map<string,int> m;

int f(string s){
	if(s.size()==1) return 1;
	if(m.find(s)!=m.end()) return m[s]; 
	if((s[0]-'0')*10 + (s[1]-'0')<=26){
		if(s.size()>2){
			if(s[2]=='0'){
				int a = f(s.substr(1,s.size()-1));
				m[s]=a;
			}
			else if(s[1]=='0'){
				int b= f(s.substr(2,s.size()-2));
				m[s]=b;
			}
			else{
				int a = f(s.substr(1,s.size()-1));
				int b = f(s.substr(2,s.size()-2));
				m[s]=a+b;
			}
		}
		else{
			if(s[1]=='0'){
				m[s]=1;
			}
			else{
				int a = f(s.substr(1,s.size()-1));
				int b = 1;
				m[s]=a+b;
			}
		}
		return m[s];
	}
	else{
		int a = s[1]!='0' ? f(s.substr(1,s.size()-1)) : 1;
		m[s]=a;
		return m[s];
	}
}

int main(){
	while(true){
		string s;
		cin>>s;
		if(s=="0") break;
		cout<<f(s)<<endl;
	}
}