#include <bits/stdc++.h>
using namespace std;

void createTree(vector<int> &t, vector<int> &v,int treeIndex, int l,int r){
	if(l==r){
		t[treeIndex]=v[l];
		return t[treeIndex];
	}
	int mid=(l+r)/2;
	createTree(t,v,2*treeIndex+1,l,mid);
	createTree(t,v,2*treeIndex+2,mid+1,r);
	t[treeIndex] = max(t[treeIndex*2+1],t[treeIndex*2+2]);
}

int getQ(vector<int> &t,int treeIndex,int l,int r, int ql,int qr){
	if(l>=ql && r<=qr) return t[treeIndex];
	int mid = (l+r)/2;
	if(ql>mid) return getQ(t,2*treeIndex+2,mid+1,r,ql,qr);
	else if(qr<=mid) return getQ(t,2*treeIndex+1,l,mid,ql,qr);
	else return max(getQ(t,2*treeIndex+1,l,mid,ql,qr) ,
					getQ(t,2*treeIndex+2,mid+1,r,ql,qr));
}

int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	vector<int> v;
	int k=n;
	while(k--){
		int t;
		cin>>t;
		v.push_back(t);
	}
	int m;
	cin>>m;
	vector<int> tree(4*n);
	createTree(tree,v,0,0,n-1);
	while(m--){
		int i,j;
		cin>>i>>j;
		cout<<getQ(tree,0,0,n-1,i-1,j-1)<<endl;
	}
}	