#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) v[i] = i+1;
		int i=-1;
		while(i<n){
			i++;
			if(i<n-1) i++;
			swap(v[i],v[i-1]);
			if(i==n-1) break;
		}
		for(int i=0;i<n;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}