#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ii> vii; 
typedef vector<vii> vvii;
typedef long long int ll;


ll f(ll a,ll n, ll m, ll x){
	if(n==1) return a%m;
	ll temp = f(a,n/2,m,x);
	temp = ((temp*x)%m + temp)%m; 
	if(n%2) {
		temp = ((temp*x)%m + a)%m;
	}
	return temp;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,n,m;
		cin>>a>>n>>m;
		ll x=1,temp=a;
		while(temp){
			x*=10;
			temp/=10;
		}
		cout<<f(a,n,m,x)<<endl;
	}
}