#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,c;
		char temp;
		cin>>a>>temp>>b>>temp>>c;
		if(a.find("machula")){
			int t = atoi(c.c_str())-atoi(b.c_str());
			a= to_string(t);
		}
		else if(b.find("machula")){
			int t = atoi(c.c_str())-atoi(a.c_str());
			b= to_string(t);
		}
		else if(c.find("machula")){
			int t = atoi(a.c_str())+atoi(b.c_str());
			c= to_string(t);
		}
		cout<<a<<" + "<<b<<" = "<<c;
	}
    return 0;
}