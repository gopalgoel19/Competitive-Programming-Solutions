#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define F first
#define S second
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

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> count(n+1,1);
	vector<int> v(n+1);
	for(int i=1;i<=n;i++) cin>>v[i];
	for(int i=2;i<=n;i++){
		if(v[i]==v[i-1]) count[i] = count[i-1] + 1;
	}
	while(m--){
		int l,r,k;
		cin>>l>>r>>k;
		int mid = (r+l)/2;
		int x = count[mid];
		int y = k-x;
		if(mid+y>r) cout<<-1<<endl;
		else if(count[mid+y]==k) cout<<v[mid]<<endl;
		else cout<<-1<<endl;
	}
}