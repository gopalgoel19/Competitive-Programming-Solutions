#include <bits/stdc++.h>
using namespace std;

bool mycomp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		vector<long long int> students(n);
		vector<long long int> price(n);
		for(int k=0;k<n;k++) cin>>students[k];
		for(int i=0;i<n;i++) cin>>price[i];
		sort(students.begin(),students.end());
		sort(price.begin(), price.end(),mycomp);	
		long long int p=0;
		for(int i=0;i<n;i++) p+=students[i]*price[i];
		cout<<p<<endl;
	}
}