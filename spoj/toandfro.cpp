#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int c;
		cin>>c;
		if(c==0) break;
		vector<char> v[100];
		string s;
		cin>>s;
		int size=s.size();
		int r=size/c;
		int k=0;
		for(int i=0;i<r;i++){
			v[i].resize(c);
			for(int j=0;j<c;j++){
				v[i][j]=s[k++];
			}
			i++;
			if(i==r) break;
			v[i].resize(c);
			for(int j=c-1;j>=0;j--){
				v[i][j]=s[k++];
			}
		}
		string msg;
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				msg.push_back(v[j][i]);
			}
		}
		cout<<msg<<endl;
	}
}