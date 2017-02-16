#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int i=0;
		int ele=0;
		stack<int> s1;
		stack<int> s2;
		while(i<n){
			if(a[i]==ele+1) {
				ele=a[i];
				s1.push(ele);
			}
			else if(!s2.empty() && s2.top()==ele+1) {
				ele=s2.top();
				s1.push(ele);
				s2.pop();
				continue;
			}
			else {
				s2.push(a[i]);
			}
			i++;
		}
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();	
		}
		if(s1.top()!=n) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}