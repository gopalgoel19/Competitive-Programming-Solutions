#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	map<int,bool> m;
	m[t]=true;
	int count=0;
	while(t!=1){
		int sum=0;
		while(t){
			sum += (t%10)*(t%10);
			t/=10;
		}
		if(m.find(sum)!=m.end()){
			cout<<-1<<endl;
			return 0;
		}
		m[sum]=true;
		t=sum;
		count++;
	}
	cout<<count<<endl;
}