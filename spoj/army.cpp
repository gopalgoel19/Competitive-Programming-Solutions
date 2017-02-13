#include <bits/stdc++.h>
using namespace std;

bool myComp(int a,int b){
	return a>b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n1;i++){
			int s;
			cin>>s;
			v1.push_back(s);
		}
		for(int i=0;i<n2;i++){
			int s;
			cin>>s;
			v2.push_back(s);
		}
		sort(v1.begin(), v1.end(), myComp);
		sort(v2.begin(), v2.end(), myComp);
		while(!v1.empty() && !v2.empty()){
			int a=v1.back();
			int b=v2.back();
			if(a<b) v1.pop_back();
			else v2.pop_back();
		}
		if(v1.empty()) cout<<"MechaGodzilla"<<endl;
		else cout<<"Godzilla"<<endl;
	}
    return 0;
}