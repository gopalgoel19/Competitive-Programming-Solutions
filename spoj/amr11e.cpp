#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1000,true);
vector<int> p;
void sieve(){
	v[0]=false;
	v[1]=false;
	for(int i=2;i<1000;i++){
		if(v[i]==false) continue;
		else p.push_back(i);
		if(i*i>1001) continue;
		for(int j=2*i;j<1001;){
			v[j]=false;
			j+=i;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	sieve();
	vector<int> l;
	l.push_back(30);
	l.push_back(42);
	int num=43;
	while(l.size()<1000){
		int count=0;
		for(int i=0;i<p.size();i++){
			if(num%p[i]==0) {
				count++;
			}
			if(count==3) {
				l.push_back(num);
				break;
			}
		}
		num++;
	}
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		cout<<l[n-1]<<endl;
	}
}