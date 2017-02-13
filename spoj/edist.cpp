#include <bits/stdc++.h>
using namespace std;

int mn(int a,int b,int c){
	if (a<b){
		if(a<c) return a;
		else return c;
	}
	else if(b<c) return b;
	else return c;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int l1=s1.size();
		int l2=s2.size();
		vector<int> m[l1+1];
		for(int i=0;i<=l1;i++) m[i].resize(l2+1);
		for(int i=0;i<=l1;i++){
			for(int j=0;j<=l2;j++){
				if(i==0) {
					m[i][j]=j;
					continue;
				}
				if(j==0) {
					m[i][j]=i;
					continue;
				}
				if(s1[i-1]==s2[j-1]) {
					m[i][j]= m[i-1][j-1];
				}
				else m[i][j]= mn(m[i-1][j],m[i][j-1],m[i-1][j-1])+1;
			}
		}
		cout<<m[l1][l2]<<endl;
	}
	return 0;
}