#include <bits/stdc++.h>
using namespace std;

int val(vector<int> &v,int l,int r,int day){
	if(l==r) return v[l]*day;
	int a = v[l]*day + val(v,l+1,r,day+1);
	int b = v[r]*day + val(v,l,r-1,day+1);
	return max(a,b);
}

int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<int> m[n];
	for(int i=0;i<n;i++) m[i].resize(n);
	for(int i=0;i<n;i++) m[i][i]=v[i]*n;
	int t=0;
	while(t<n){
		t++;
		for(int i=0;i<n;i++){
			int j=i+t;
			if(j>=n) break;
			int d = n - (j-i);
			m[i][j] = max(v[j]*d+m[i][j-1],v[i]*d+m[i+1][j]);
		}
	}
	cout<<m[0][n-1]<<endl;
}