#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int n,m;
		cin>>n>>m;
		if(n==0 && m==0) break;
		int* a = new int[n];
		int* b = new int[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		if(a[0]<b[1]) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
}