#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int num=1;
	while(true){
		string s;
		cin>>s;
		if(s[0]=='-') break;
		int c=0;
		int o=0;
		int n=s.size();
		int i=0;
		while(i<n){
			if(s[i]=='{') o++;
			else{
				o--;
				if(o<0){
					c++;
					o=1;
				}
			}
			i++;
		}	
		c+= o/2;
		cout<<num<<". "<<c<<endl;
		num++;
	}
}