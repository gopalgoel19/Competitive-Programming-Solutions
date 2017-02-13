#include <bits/stdc++.h> 
#define pb push_back 
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;  
typedef pair<ll,ll> ii; 
typedef vector<ii> vii; 

int main(){
	ll n,l,r;
	cin>>n>>l>>r;
	vi v(n);
	for(int i=0;i<n;i++) {
		ll x;
		cin>>x;
		v[i]=x;
	}
	sort(v.begin(), v.end());
	vii interval;
	for(int i=0;i<n-1;i++){
		ii t = {v[i+1]-v[i]+1,v[i+1]+v[i]-1};
		interval.pb(t);
	}
	sort(interval.begin(), interval.end());
	stack<ii> s;
	s.push(interval[0]);
	for(int i=1;i<interval.size();i++){
		ii t1 = s.top();
		ii t2 = interval[i];
		if(t1.second>=t2.first) {
			s.pop();
			ii i_new = {t1.first,max(t2.second,t1.second)};
			s.push(i_new);
		}
		else s.push(t2);
	}	
	ll count = 0;
	while(!s.empty()){
		ii t = s.top();
		if(r>t.second) break;
		if(r>=t.first && r<=t.second){
			s.pop();
			t = {t.first,r};
			s.push(t);
			break;
		}
		else s.pop();
	}
	while(!s.empty()){
		ii t = s.top();
		s.pop();
		if(l<t.first){
			count += t.second - t.first + 1;
		}
		else if(l>=t.first && l<=t.second){
			count += t.second-l+1;
			break;
		}
		else break;
	}
	cout<<count<<endl;
}