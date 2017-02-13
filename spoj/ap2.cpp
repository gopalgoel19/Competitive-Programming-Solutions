#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b;
		long long sum;
		cin>>a>>b>>sum;
		long long int n = (sum*2)/(a+b);
		cout<<n<<endl;
		double d = (b-a)*1.0/(n-5);
		int f = int(a - 2*d);
		for(int i=0;i<n;i++){
			cout<<f<<" ";
			f=f+d;
		}
		cout<<endl;
	}
    return 0;
}