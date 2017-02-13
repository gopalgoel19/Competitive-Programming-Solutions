#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.size();
		string a (s);
		int i=0;
		while(i<l/2){
			a[l-1-i]=a[i];
			i++;
		}
		if(l%2==0){
			int index=l/2-1;
			if(s[index]<s[index+1]){
				a[index]++;
				a[index+1]++;
			}
			else if(s[index]==s[index+1]){
				if(s[index]<'9'){
					a[index]++;
					a[index+1]++;
				}
				else{
					while(a[index]=='9' && index>=0){
						a[index]='0';
						a[l-1-index]='0';
						index--;
					}
					if(index>=0){
						a[index]++;
						a[l-1-index]++;
					}
					else{
						a = "1" + a + "1";
					}
				}
			}
		}
		else{
			int index=l/2;
			if(s[index+1]>a[index+1]) {
				if(s[index]<'9'){
					a[index]++;
				}
				else{
					a[index]='0';
					index--;
					while(a[index]=='9' && index>=0){
						a[index]='0';
						a[l-1-index]='0';
						index--;
					}
					if(index>=0){
						a[index]++;
						a[l-1-index]++;
					}
					else{
						a = "1" + a + "1";
					}
				}
			}
			if(s[index+1]==a[index+1]){
				while()
			}
		}
	}
    return 0;
}