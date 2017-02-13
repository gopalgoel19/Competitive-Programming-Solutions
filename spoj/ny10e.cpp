#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	vector<vector<long long int> > v(65);
	for(int i=0;i<65;i++) v[i].resize(10);
	for(int i=0;i<10;i++) {
		v[1][i]=10-i;
	}
	for(int i=2;i<65;i++){
		v[i][9]=v[i-1][9];
	}
	for(int i=2;i<65;i++){
		for(int j=8;j>=0;j--){
			v[i][j] = v[i-1][j];
			v[i][j] += v[i][j+1];
		}
	}
	for(int k=1;k<=t;k++){
		int d,n;
		cin>>d>>n;
		cout<<d<<" "<<v[n][0]<<endl;
	}
}