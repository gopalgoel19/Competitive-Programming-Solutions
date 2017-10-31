#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	while(v[k]==v[k-1] && k<n) k++;
	while(k>0 && v[k-1]<=0) k--;
	cout<<k<<endl;
}