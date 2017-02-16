#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,m;
	cin>>n>>m;
	vector<long long int> v(n+1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}	
	int len = (int)sqrt(n + 0.0) + 1;
	vector<long long int> b (len,0);
	for (int i=0; i<n; ++i) b[i / len] += v[i];
	/*
	for(int i=0;i<len;i++) cout<<b[i]<<" ";
	cout<<endl;
	*/
	while(m--){
		long long int x;
		cin>>x;
		if(x==1){
			long long int p,q;
			cin>>p>>q;
			p--;
			v[p]=q;
			int j=p/len;
			b[j]=0;
			for(int i=j*len; i<n && i< (j+1)*len;i++){
				b[i/len] += v[i];
			}
			/*
			for(int i=0;i<len;i++) cout<<b[i]<<" ";
			cout<<endl;
			*/
		}
		else{
			long long int s;
			cin>>s;
			int i=0;
			long long int sum=0;
			while(sum<s && i<len){
				sum+=b[i];
				i++;
			}
			if(sum<s) {
				cout<<"Not Found"<<endl;
			}
			else{
				i--;
				sum-=b[i];
				i=i*len;
				while(sum<s){
					sum+=v[i];
					i++;
				}
				if(sum==s) cout<<"Found "<<i<<endl;
				else cout<<"Not Found"<<endl;
			}
		}
	}
		
}