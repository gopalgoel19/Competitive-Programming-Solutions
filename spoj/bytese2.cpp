#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		vector<int> v1(n);
		vector<int> v2(n);
		for(int i=0;i<n;i++) cin>>v1[i]>>v2[i];
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		int c=0;
		int max=0;
		int i=0,j=0;
		while(i<n){
			if(v1[i]<v2[j]){
				c++;
				i++;
				if(c>max) max=c;
			}
			else{
				c--;
				j++;
			}
		}
		cout<<max<<endl;
	}
}