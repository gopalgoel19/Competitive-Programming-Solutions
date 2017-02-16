#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v.begin(),v.end());
		int i=0,j=k-1;
		int min = v[j]-v[i];
		while(j<n){
			if(v[j]-v[i]<min) min=v[j]-v[i];
			i++;
			j++;
		}
		cout<<min<<endl;
	}
}