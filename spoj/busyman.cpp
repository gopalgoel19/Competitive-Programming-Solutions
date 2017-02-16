#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int,int> &p1, pair<int,int> &p2){
	if(p1.second<p2.second) return true;
	else if(p1.second>p2.second) return false;
	else {
		return p1.first<p2.first;
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		vector<pair<int,int> > v(n);
		for(int i=0;i<n;i++) {
			cin>>v[i].first>>v[i].second;
		}	
		sort(v.begin(), v.end(), mycomp);	
		int count=1;
		int end=v[0].second;
		for(int i=1;i<n;i++){
			if(v[i].first>=end){
				count++;
				end=v[i].second;
			}
		}		
		cout<<count<<endl;
	}
}