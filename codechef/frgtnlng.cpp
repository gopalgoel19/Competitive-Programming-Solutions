#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		std::vector<string> v;
		while(n--){
			string s;
			cin>>s;
			v.push_back(s);
		}
		set<string> st;
		while(k--){
			int tt;
			cin>>tt;
			while(tt--){
				string s;
				cin>>s;
				st.insert(s);
			}
		}
		for(int i=0;i<v.size();i++){
			if(st.find(v[i])!=st.end()) cout<<"YES ";
			else cout<<"NO ";  
		}
		cout<<endl;
	}
}