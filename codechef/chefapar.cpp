#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;

typedef long long int ll;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ii> vii; 
typedef vector<vii> vvii;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v(n+1);
		int first=0;
		int count=0;
		for(int i=1;i<=n;i++) {
			cin>>v[i];
			if(!first && v[i]==0) first=i;
			if(!v[i]) count++;
		}
		if(!first) cout<<0<<endl;
		else{
			cout<< (n-first+1)*100 + (count*1000)<<endl;
		}
	}
}	