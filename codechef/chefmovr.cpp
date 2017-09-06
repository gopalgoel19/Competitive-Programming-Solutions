#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		vector<long long int> v(n);
		long long int sum=0;
		for(int i=0;i<n;i++) {
			cin>>v[i];
			sum+=v[i];
		}
		// long long int sum = accumulate(v.begin(), v.end(),0);
		bool ans = true;
		if(sum%n) ans = false;
		int count = 0;
		long long int f = sum/n;
		for(int i=0;i<n-d;i++){
				long long int diff = abs(v[i]-f);
				if(v[i]>f) v[i+d] += diff;
				else v[i+d] -= diff;
				v[i] = f;
				count += diff;
		}
		for(int i=n-d;i<n;i++) {
			if(v[i]!=f) {
				ans = false;
				break;
			}
		}
		if(ans) cout<<count<<endl;
		else cout<<-1<<endl;
	}
}