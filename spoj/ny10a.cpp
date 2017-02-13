#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<string,int> m;
		m["TTT"]=0; m["TTH"]=1; m["THT"]=2; m["THH"]=3; m["HTT"]=4; m["HTH"]=5; m["HHT"]=6; m["HHH"]=7;
		vector<int> v(8,0);
		string s;
		cin>>s;
		for(int i=0;i<s.size()-2;i++){
			string c=s.substr(i,3);
			v[m[c]]++;
		}
		cout<<n<<" ";
		for(int i=0;i<8;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}