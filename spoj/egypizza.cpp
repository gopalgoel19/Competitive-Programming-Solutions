#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	 	int n;
		cin>>n;
		int a=0,b=0,c=0;
		for(int i=0;i<n;i++){
			string t;
			cin>>t;
			if(t=="1/4") a++;
			else if(t=="1/2") b++;
			else c++;
		}
		int ans=1;
		ans+=c;
		a-=c;
		ans+=b/2;
		b=b-(b/2)*2;
		if(b){
			ans+=1;
			a=a-2;
		}
		if(a>0) {
			ans+=a/4;
			a=a-(a/4)*4;
			if(a) ans++;
		}
		cout<<ans<<endl;
}