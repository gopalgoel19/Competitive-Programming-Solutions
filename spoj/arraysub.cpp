#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int k;
	cin>>k;
	deque<int> q;
	for(int i=0;i<k;i++){
		while(!q.empty() && v[q.back()]	<v[i]) q.pop_back();
		q.push_back(i);
	}
	cout<<v[q.front()]<<" ";
	for(int i=k;i<n;i++){
		while(!q.empty() && v[q.back()]<v[i]) q.pop_back();
		q.push_back(i);
		while(i-q.front()>=k) q.pop_front();
		cout<<v[q.front()]<<" ";
	}
	cout<<endl;
}