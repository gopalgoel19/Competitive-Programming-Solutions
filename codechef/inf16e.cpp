#include <bits/stdc++.h>
using namespace sdt;

int main(){
	int t;
	cin>>t;
	int r,g;
	cin>>r>>g;
	long long int a,b;
	cin>>a>>b;
	vector<pair<long long int,long long int> > right(r);
	for(int i=0;i<r;i++){
		long long int p,v;
		cin>>p>>v;
		right[i].first = p;
		right[i].second = v;
	}
	vector<pair<long long int,long long int> > left(r);
	for(int i=0;i<g;i++){
		long long int p,v;
		cin>>p>>v;
		left[i].first = p;
		left[i].second = v;
	}
}