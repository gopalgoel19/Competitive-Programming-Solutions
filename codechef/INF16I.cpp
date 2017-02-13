#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> d(n+1);
		for(int i=1;i<=n;i++){
			int x,y;
			cin>>x>>y;
			d[x]=y;
		}
		vector<int> size(n+1,0);
		for(int i=1;i<=n;i++){
			cin>>size[i];
		}
		vector<int> us(k);
		for(int i=0;i<k;i++){
			cin>>us[i];
		}
		int count=0;
		for(int i=0;i<k;i++){
			int num=us[i];
			if(size[num]==0) continue;
			bool ans=true;
			while(d[num]!=-1){
				if(size[d[num]]<=0) {
					ans=false;
					break;
				}
				num = d[num];
			}
			if(ans){
				count++;
				num=us[i];
				size[num]--;
				while(d[num]!=-1){
					num=d[num];
					size[num]--;
				}
			}
		}
		cout<<count<<endl;
	}
}