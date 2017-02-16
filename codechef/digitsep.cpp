#include <bits/stdc++h>
using namspace std;

int f(string s,int x,int y,int c,int i){

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n;
		string s;
		cin>>s>>m>>x>>y;
		if(m==1){
			int a= __gcd(s[0]-'0',s[i]-'0');
			for(int i=2;i<n;i++){
				a = __gcd(s[i]-'0',a);
			}
			cout<<a<<endl;
		}
		else{
			cout<<max(f(s,x,y,1),f(s,x,y,2))<<endl;
		}
	}
}