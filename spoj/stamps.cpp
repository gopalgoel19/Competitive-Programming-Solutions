#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int k=1;
	while(t--){
		int s,n;
		cin>>s>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int tt;
			cin>>tt;
			v.push_back(tt);
		}
		sort(v.begin(),v.end());
		int c=0;
		while(s>0 && !v.empty()){
			s-=v.back();
			v.pop_back();
			c++;
		}
		cout<<"Scenario #"<<k<<":"<<endl;
		if(s<=0){
			cout<<c<<endl<<endl;
		}
		else{
			cout<<"impossible"<<endl<<endl;
		}
		k++;
	}
    return 0;
}