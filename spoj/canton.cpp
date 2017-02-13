#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int p;
		cin>>p;
		int n=0;
		int sum=0;
		while(sum<p){
			n++;
			sum = (n*(n+1))/2;
		}
		n--;
		sum = (n*(n+1))/2;
		int rem = p-sum;
		int row = n+1;
		string term = "1/1";
		int term1 = rem;
		int term2 = row+1-rem;
		if(row%2) swap(term1,term2);
		cout<<"TERM "<<p<<" IS "<<term1<<"/"<<term2<<endl;;
	}
}