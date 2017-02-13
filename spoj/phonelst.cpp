#include <bits/stdc++.h>
using namespace std;

struct node{
	bool isEnd;
	node* p[10];
	node(){
		isEnd=false;
		for(int i=0;i<10;i++) p[i]=NULL; 
	}
};

bool addToTree(node* root, string &s){
	int n=s.size();
	bool ans=false;
	node* temp=root;
	for(int i=0;i<n;i++){
		if(temp->p[s[i]-'0']==NULL){
			temp->p[s[i]-'0'] = new node();
			temp = temp->p[s[i]-'0'];
		}
		else{
			temp = temp->p[s[i]-'0'];
			if(temp->isEnd==true) {
				ans=true;
				break;
			}
		}
	}
	temp->isEnd=true;
	if(ans) return ans;
	for(int i=0;i<10;i++) {
		if(temp->p[i]!=NULL) ans=true;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		node* root = new node();
		int n;
		cin>>n;
		bool ans=true;
		bool temp=false;
		for(int i=0;i<n;i++) {
			string s;
			cin>>s;
			if(ans) temp = addToTree(root,s);
			if(temp) ans=false;
		}
		if(ans) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}