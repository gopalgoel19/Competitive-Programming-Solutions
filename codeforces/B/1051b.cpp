#include<bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	long long  int a,b,i;
	cin>>a>>b;
/*if((b-a)%2==0)
{cout<<"NO";
	return 0;
}*/
if((b-a)%2!=0)
cout<<"YES";
for(i=0;i<b-a+1;i+=2)
cout<<'\n'<<a+i<<' '<<a+i+1;
	

return 0;
}
