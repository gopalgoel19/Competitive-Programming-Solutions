#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	int ans=0;
	while(t--){
		int n;
		cin>>n;
		ans^=n;
	}
	cout<<ans<<endl;
}