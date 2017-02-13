#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int count=0;
	int i=0,j=1;
	while(j<n){
		if(a[j]-a[i]==k){
			count++;
			i++;
			j++;
		}
		else if(a[j]-a[i]<k){
			j++;
		}
		else{
			i++;
			if(i==j) j++;
		}
	}
	cout<<count<<endl;
}