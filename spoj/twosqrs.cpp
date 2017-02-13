#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	vector<long long int> v(1000001);
	for(long long int i=0;i<1000001;i++){
		v[i] = i*i;
	}
	for(int k=0;k<t;k++){
		long long int n;
		cin>>n;
		int i=0,j=int(sqrt(n));
		while(i<=j){
			if(v[j]+v[i]>n) j--;
			else if(v[j]+v[i]<n) i++;
			else break;
		}
		if(i>j) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}