#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	string s;
	getline(cin,s);
	t = atoi(s.c_str());
	while(t--){
		int n;
		getline(cin,s);
		n = atoi(s.c_str());
		vector<string> v(n);
		for(int i=0;i<n;i++){
			string s;
			getline(cin,s);
			v[i]=s;
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;){
			cout<<v[i]<<" ";
			int count=1;
			int j=i+1;
			while(j<v.size() && v[j]==v[i]) {
				j++;
				count++;
			}
			cout<<count<<endl;
			i=j;
		}
		cout<<endl;
		getline(cin,s);
	}
}