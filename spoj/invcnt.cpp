#include <bits/stdc++.h>
using namespace std;

long long int merge(vector<int> &v, int l1,int r1, int l2, int r2){
	vector<int> t;
	int i=l1;
	int j=l2;
	long long int count=0;
	while(i<=r1 && j<=r2){
		if(v[i]>v[j]){
			count += (r1-i+1);
			t.push_back(v[j]);
			j++;
		}
		else {
			t.push_back(v[i]);
			i++;
		}
	}
	while(i<=r1){
		t.push_back(v[i]);
		i++;
	}
	while(j<=r2){
		t.push_back(v[j]);
		j++;
	}
	int k=l1;
	for(int i=0;i<t.size();i++){
		v[k++]=t[i];
	}
	return count;
}

long long int mergeSort(vector<int> &v, int l , int r){
	if(l==r) return 0;
	int mid=(l+r)/2;
	long long int i1 = mergeSort(v,l,mid);
	long long int i2 = mergeSort(v,mid+1,r);
	long long int i3 = merge(v,l,mid,mid+1,r);
	//cout<<i1<<" "<<i2<<" "<<i3<<endl;
	return i1+i2+i3;
}

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		long long int i = mergeSort(v,0,n-1);
		//for(int i=0;i<n;i++) cout<<v[i]<<" ";
		//cout<<endl;
		cout<<i<<endl;
	}
	
}