#include <bits/stdc++.h>
using namespace std;

bool isOperand(char i){
	return i>='a' && i<='z';
}

bool isOperator(char i){
	return i=='+' || i=='-' || i=='*' || i=='/' || i=='^';
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		stack<char> s;
		int size=a.size();
		map<char,int> m;
		m['+']=0; m['-']=1; m['*']=2; m['/']=3; m['^']=4; m['(']=5;
		string rpn;
		for(int i=0;i<size;i++){
			if(a[i]=='(') s.push('(');
			else if(isOperand(a[i])){
				rpn.push_back(a[i]);
			}
			else if(isOperator(a[i])){
				if(s.empty() || s.top()=='('){
					s.push(a[i]);
				}
				else if(m[a[i]]>m[s.top()]){
					s.push(a[i]);
				}
				else{
					while(!s.empty() && m[s.top()]>m[a[i]]){
						rpn.push_back(s.top());
						s.pop();
					}
					s.push(a[i]);
				}
			}
			else if(a[i]==')'){
				while(!s.empty() && s.top()!='('){
					rpn.push_back(s.top());
					s.pop();
				}
				s.pop();
			}
		}
		while(!s.empty()){
			rpn.push_back(s.top());
			s.pop();
		}
		cout<<rpn<<endl;
	}
}