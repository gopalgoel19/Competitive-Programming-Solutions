#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,r;
	cin>>k>>r;
	int temp=k;
	int count=1;
	while(temp%10 != 0 && temp%10 != r){
		count++;
		temp+=k;	
	}
	cout<<count<<endl;
}