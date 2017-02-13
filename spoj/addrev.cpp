#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string s1,s2;
		cin>>s1>>s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		int n1=atoi(s1.c_str());
		int n2=atoi(s2.c_str());
		string ans = to_string(n1+n2);
		for(int i=ans.size()-1;i>=0;i--){
		    if(ans[i]=='0') ans.pop_back();
		    else break;
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
	return 0;
} 