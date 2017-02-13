#include <bits/stdc++.h>
using namespace std;

enum{rig,dwn,lft,up};

int main(){
	ios_base::sync_with_stdio(false); 
	int c;
	cin>>c;
	for(int k=0;k<c;k++){
		int n,m;
		cin>>n>>m;
		int t=0,b=n-1,l=0,r=m-1;
		int d;
		d=rig;
		if(n>4 && m>4) {
			int x = min(n,m);
			t=x/2 - 1;
			b=n-x/2;
			l=x/2 - 1 ;
			r=m-x/2; 
		}
		while(t<=b && l<=r){
			t++;
			if(t>b) break;
			d=dwn;
			r--;
			if(l>r) break;
			d=lft;
			b--;
			if(t>b) break;
			d=up;
			l++;
			if(l>r) break;
			d=rig;
		}
		if(d==up) cout<<"U"<<endl;
		else if(d==dwn) cout<<"D"<<endl;
		else if(d==rig) cout<<"R"<<endl;
		else if(d==lft) cout<<"L"<<endl;
	}
}