#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=n;
	for(int i=2;i<n;i++){
		bool t=false;
		for(int j=i;j<n;j++){
			if(j*i>n)break;
			else{
				t=true;
				ans++;
			}
		}
		if(!t) break;
	}
	cout<<ans<<endl;
}