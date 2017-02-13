#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		vector<int> v(n+1);
		v[0]=0;
		for(int i=1;i<=n;i++) cin>>v[i];
		long long int area=0;
		stack<int> s;
		s.push(0);
		for(int i=1;i<=n;i++){
			if(v[i]>v[s.top()]) s.push(i);
			else{
				while(v[s.top()]>v[i]){
					int t = s.top();
					s.pop();
					long long int t_area = (long long)v[t] * (long long)(i-s.top()-1);
					if(t_area>area) area=t_area;
				}
				while(!s.empty() && v[i]==v[s.top()]) s.pop();
				s.push(i);
			}
		}
		while(s.size()>1){
			int t = s.top();
			s.pop();
			long long int t_area = (long long)v[t] * (long long)(n+1-s.top()-1);
			if(t_area>area) area=t_area;
		}
		cout<<area<<endl;
	}
}