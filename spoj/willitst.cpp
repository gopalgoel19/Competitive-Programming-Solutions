#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	if(t==1) cout<<"TAK"<<endl;
	else if(t%2==1) cout<<"NIE"<<endl;
	else {
		while(t>1){
			if(t%2==1) break;
			else t=t/2;
		}
		if(t==1) cout<<"TAK"<<endl;
		else cout<<"NIE"<<endl;
	}
    return 0;
}