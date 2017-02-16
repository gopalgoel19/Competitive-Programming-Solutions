#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>m>>n;
		bool* a = new bool[n-m+1];
		memset(a,true,n-m+1);
		for(int i=2;i<n;i++){
		    int strt = (m/i)*i;
		    if(strt<=m) strt+=i;
		    for(int j=strt;j<=n;){
		        a[j-m]=false;
		        j+=j;
		    }
		}
		for(int i=0;i<n-m+1;i++){
		    if(a[i]==true){
		        cout<<i+m<<endl;
		    }
		}
	}
	return 0;
} 