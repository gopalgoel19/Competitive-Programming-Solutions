#include <bits/stdc++.h>
using namespace std;

int toNum(char i){
	return i-'0';
}

char toChar(int i){
	return i+'0';
}

int main(){
	int n;
	n=10;
	while(n--){
		string sum,more;
		cin>>sum>>more;
		reverse(sum.begin(),sum.end());
		reverse(more.begin(),more.end());
		int i,carry=0;
		string ans;
		for(i=0;i<sum.size() && i<more.size();i++){
			int a=toNum(sum[i]);
			int b=toNum(more[i]);
			int s=a+b+carry;
			ans.push_back(toChar(s%10));
			carry=s/10;
		}
		if(sum.size()>more.size()){
			while(i!=sum.size()){
				int s = toNum(sum[i]) + carry;
				ans.push_back(toChar(s%10));
				carry=s/10;
				i++;
			}
		}
		if(carry){
			ans.push_back(toChar(carry));
		}
		reverse(ans.begin(), ans.end());
		carry=0;
		for(int j=0;j<ans.size();j++){
			int q = (toNum(ans[j])+ carry*10)/2;
			carry = (toNum(ans[j])+ carry*10)%2;
			ans[j] = toChar(q);
		}
		int j=0;
		while(ans[j]=='0') j++;
		for(;j<ans.size();j++) cout<<ans[j];
		cout<<endl;
		string a2;
		reverse(ans.begin(),ans.end());
		for(i=0;i<sum.size() && i<ans.size();i++){
			int a=toNum(sum[i]);
			int b=toNum(ans[i]);
			if(a<b){
				a = 10+a;
				int t=i+1;
				while(sum[t]<='0'){
					sum[t]='9';
					t++;
				}
				sum[t]--;
			}
			a2.push_back(toChar(a-b));
		}
		while(i!=sum.size()){
			a2.push_back(sum[i]);
			i++;
		}
		reverse(a2.begin(), a2.end());
		j=0;
		while(a2[j]=='0') j++;
		for(;j<a2.size();j++) cout<<a2[j];
		cout<<endl;
	}
}