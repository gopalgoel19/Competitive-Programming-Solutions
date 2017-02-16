#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	vector<int> a(10);
	for(int i=0;i<10;i++) scanf("%d", &a[i]);
	int v=0,d=100;
	for(int i=0;i<10;i++){
		v+=a[i];
		int dd=100-v;
		if(abs(dd)<=abs(d)){
			d=dd;
		}
		else {
			v-=a[i];
			break;
		}
	}
	printf("%d\n",v);
}