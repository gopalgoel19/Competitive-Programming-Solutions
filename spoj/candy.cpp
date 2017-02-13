#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==-1) break;
		vector<int> v;
		int sum=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
			v.push_back(x);
		}
		if(sum%n!=0) cout<<-1<<endl;
		else{
			int f=sum/n;
			int ans=0;
			for(int i=0;i<n;i++){
				ans+=abs(v[i]-f);
			}
			ans/=2;
			cout<<ans<<endl;
		}
	}
	return 0;
}