#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int n,m;
		cin>>n;
		if(n==0) break;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>m;
		vector<int> b(m);
		for(int i=0;i<m;i++) cin>>b[i];
		int i=0,j=0;
		int sum1=0,sum2=0;
		while(i<n && j<m){
			if(a[i]<b[j]){
				sum1+=a[i];
				i++;
			}
			else if(a[i]>b[j]){
				sum2+=b[j];
				j++;
			}
			else{
				sum1 = sum2 = max(sum1,sum2) + a[i];
				i++;
				j++;
			}
		}
		while(i<n){
			sum1+=a[i];
			i++;
		}
		while(j<m){
			sum2+=b[j];
			j++;
		}
		cout<<max(sum1,sum2)<<endl;
	}
}