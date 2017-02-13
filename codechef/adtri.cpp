#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(5000001,true);
vector<bool> v(5000001,false);

void sieve(){
	prime[0]=prime[1]=false;
	for(int i=2;i*i<5000001;i++){
		if(!prime[i]) continue;
		for(int j=i*i;j<5000001;){
			prime[j]=false;
			j+=i;
		}
	}
	for(int i=2;i<5000001;i++){
		if(!prime[i]) continue;
		if(i%4!=1) continue;
		for(int j=i;j<5000001;j+=i){
			v[j]=true;
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	sieve();
	while(t--){
		int n;
		scanf("%d",&n);
		bool ans=v[n];	
		if(ans) printf("YES\n");
		else printf("NO\n");
	}
}