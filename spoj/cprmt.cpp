#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	char s11[1000],s22[1000];
	while(scanf("%s%s",&s11,&s22) !=EOF){
		string s1=s11;
		string s2=s22;
		vector<int> v1(128,0), v2(128,0);
		for(int i=0;i<s1.size();i++){
			v1[s1[i]]+=1;
		}
		for(int i=0;i<s2.size();i++){
			v2[s2[i]]+=1;
		}
		string ans;
		for(int i=97;i<123;i++){
			int j = min(v1[i],v2[i]);
			while(j--) ans.push_back(char(i));
		}
		cout<<ans<<endl;
	}
	
}