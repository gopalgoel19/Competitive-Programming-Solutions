#include <bits/stdc++.h>
using namespace std;

pair<int,int> maxi(pair<int,int> &p1,pair<int,int> &p2){
	pair<int,int> p;
	int a[4]; a[0]=p1.first;a[1]=p1.second;a[2]=p2.first;a[3]=p2.second;
	int m=0;
	for(int i=1;i<4;i++){
		if(a[i]>a[m]) m=i;
	}
	p.first=a[m];
	a[m]=-1;
	m=0;
	for(int i=1;i<4;i++){
		if(a[i]>a[m]) m=i;
	}
	p.second=a[m];
	return p;
}

void createTree(vector<pair<int,int> > &t, vector<int> &v,int treeIndex, int l,int r){
	if(l==r){
		t[treeIndex].first=v[l];
		t[treeIndex].second=0;
		return;
	}
	int mid=(l+r)/2;
	createTree(t,v,2*treeIndex+1,l,mid);
	createTree(t,v,2*treeIndex+2,mid+1,r);
	t[treeIndex] = maxi(t[treeIndex*2+1],t[treeIndex*2+2]);
}

pair<int,int> getQ(vector<pair<int,int> > &t,int treeIndex,int tl,int tr, int l,int r){
	if(l<=tl && tr<=r) return t[treeIndex];
	int mid = (tl+tr)/2;
	if(l>mid) return getQ(t,2*treeIndex+2,mid+1,tr,l,r);
	else if(r<=mid) return getQ(t,2*treeIndex+1,tl,mid,l,r);
	else {
		pair<int,int> p1 = getQ(t,2*treeIndex+1,tl,mid,l,r); 
		pair<int,int> p2 = getQ(t,2*treeIndex+2,mid+1,tr,l,r);
		pair<int,int> p;
		if(p1.first>p2.first){
			p = p1;
			if(p2.first>p.second) p.second=p2.first;	
		}
		else{
			p = p2;
			if(p1.first>p.second) p.second=p1.first;	
		}
		return p;
	}
}

void updQ(vector<pair<int,int> > &t,int treeIndex,int tl, int tr,int i,int val){
	if(tl==tr) {
		t[treeIndex].first=val;
		return;
	}
	if(i<tl || tr<i) return;
	int mid = (tl+tr)/2;
	if(i>mid) updQ(t,2*treeIndex+2,mid+1,tr,i,val);
	else if(i<=mid) updQ(t,2*treeIndex+1,tl,mid,i,val);
	else {
		updQ(t,2*treeIndex+2,mid+1,tr,i,val);
		updQ(t,2*treeIndex+1,tl,mid,i,val);
	}
	t[treeIndex] = maxi(t[treeIndex*2+1],t[treeIndex*2+2]);
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
	vector<pair<int,int> > tree(4*n);
	createTree(tree,v,0,0,n-1);
	while(m--){
		char c;
		cin>>c;
		int i,j;
		cin>>i>>j;
		if(c=='Q'){
			pair<int,int> p = getQ(tree,0,0,n-1,i-1,j-1);
			cout<<p.first+p.second<<endl;
		}
		else{
			updQ(tree,0,0,n-1,i-1,j);
		}
	}
}	