#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		double n;
		cin>>n;
		if(n==0.00) break; 
		else{
			int count=1;
			double sum=0.5;
			double x=3.0;
			while(sum<n){
				sum+= 1/x;
				x+=1;
				count++;
			}
			cout<<count<<" card(s)"<<endl;
		}
	}
    return 0;
}