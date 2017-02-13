#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double s = (a+b+c+d)/2.0;
		double area = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<fixed<<setprecision(2)<<area<<endl;
	}
}