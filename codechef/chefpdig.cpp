#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size();
		unordered_map<int,int> v;
		for(int i=0;i<10;i++) v[i] = 0;
		for(int i=0;i<n;i++) v[s[i]-'0']++;
		vector<char> ans;
		for(char i='A';i<='Z';i++){
			int d1 = int(i)%10;
			int d2 = int(i)/10;
			if(d1!=d2 && v[d1]>0 && v[d2]>0) ans.push_back(i);
			else if(d1==d2 && v[d1]>1) ans.push_back(i); 
		}
		for(int i=0;i<ans.size();i++) cout<<ans[i];
		cout<<endl;
	}
}