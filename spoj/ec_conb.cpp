#include <bits/stdc++.h>
using namespace std;

string to_binary(int n){
	string s;
	while(n){
		if(n%2==1) s.append("1");
		else s.append("0");
		n/=2;
	}
	return s;
}

int to_int(string &s){
	int num=0;
	int i=0;
	while(i<s.size()){
		num*=2;
		if(s[i]=='1') num+=1;
		i++;
	}
	return num;
}

void convert(int &n){
	string s = to_binary(n);
	n = to_int(s);
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
			int v;
			cin>>v;
			if(v%2==1) {
				cout<<v<<endl;
			}
			else{
				convert(v);
				cout<<v<<endl;
			}
	}
}