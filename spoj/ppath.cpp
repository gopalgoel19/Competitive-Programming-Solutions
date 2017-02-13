#include <bits/stdc++.h>
using namespace std;
vector<bool> p(10000,true);
void prime(){
	for(int i=2;i*i<=10000;i++){
		if(p[i]==false) continue;
		for(int j=i*i;j<10000;){
			p[j]=false;
			j+=i;
		}
	}
	for(int i=0;i<1000;i++){
		p[i]=false;
	}
}

int main(){
	prime();
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		queue<int> q;
		q.push(a);
		int c=0;
		bool possible=false;
		int count=0;
		vector<bool> v(10000,false);
		v[a]=true;
		while(!q.empty()){
			int size=q.size();
			while(size--){
				int k = q.front();
				q.pop();
				//cout<<k<<endl;
				if(k==b) {
					possible=true;
					break;
				}
				string s = to_string(k);
				for(int i=0;i<4;i++){
					char x = s[i];
					for(char k='0';k<='9';k++){
						if(k==x) continue;
						s[i]=k;
						int num=atoi(s.c_str());
						if(!v[num] && p[num]==true) {
							q.push(num);
							v[num]=true;
						}
					}
					s[i]=x;
				}	
			}
			if(possible) break;
			count++;
		}
		cout<<count<<endl;
	}
}