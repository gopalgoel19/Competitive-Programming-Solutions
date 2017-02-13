#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	std::vector<int> c(4,0);
	for(int i=0;i<s.size();i++){
		if(s[i]=='C') c[0]++;
		else if(s[i]=='H' && c[1]<c[0]) c[1]++;
		else if(s[i]=='E' && c[2]<c[1]) c[2]++;
		else if(s[i]=='F' && c[3]<c[2]) c[3]++;
	}
	cout<<(c[3])<<endl;
}