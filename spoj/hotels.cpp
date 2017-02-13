#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	long long int n,m;
		cin>>n>>m;
	vector<long long int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int i=0,j=-1;
	while(v[i]>m && i<n) i++;
	if(i==n) {cout<<0<<endl; return 0;}
	j=i+1;
	long long int max=v[i];
	long long int sum=v[i];
	while(j<n || i<n){
		if(sum<m){
			if(j<n){
				sum+=v[j];
				j++;
			}
			else {
				sum-=v[i];
				i++;
			}
			if(sum<=m && sum>max) max=sum;
		}
		else if(sum>m){
			sum-=v[i];
			i++;
		}
		else if(sum==m) {
			max=sum;
			break;
		}
		else i++;
	}
	cout<<max<<endl;
}