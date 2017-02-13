#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int m,k,l;
	cin>>k>>l>>m;
	vector<bool> v(1000001,-1);
	v[0]=false;
	v[1]=true;
	for(int i=2;i<1000001;i++){
		v[i] = !v[i-1];
		if((i>=k && !v[i-k]) || (i>=l && !v[i-l])) v[i]=true;
	}
	while(m--){
		int n;
		cin>>n;
		if(v[n]) cout<<"A";
		else cout<<"B";
	}
	cout<<endl;
}