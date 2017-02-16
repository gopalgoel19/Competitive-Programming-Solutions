#include <bits/stdc++.h>
using namespace std;

// a*b + c = d * (e + f)

int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				int sum = v[i]*v[j] + v[k] ;
				v1.push_back(sum);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				int sum = v[i] * ( v[j] + v[k]) ;
				if(v[i]==0) continue;
				else v2.push_back(sum);
			}
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	long long int count=0;
	int i=0,j=0;
	while(i<v1.size() && j<v2.size()){
		long long int v1c=0,v2c=0;
		int temp=v1[i];
		while(j<v2.size() && v2[j]<temp) j++;
		while(j<v2.size() && v2[j]==temp) {
			v2c++;
			j++;
		}
		while(i<v1.size() && v1[i]==temp) {
			v1c++;
			i++;
		}
		count += v1c*v2c;
	}
	cout<<count<<endl;
}