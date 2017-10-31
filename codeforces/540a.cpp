#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n];
	char b[n];
	int i,j,k;
	int c=0;
	int d=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		d=abs(b[i]-a[i]);
		if(d>5)
		{
			if(b[i]>a[i])
				d=(a[i]+10)-b[i];
			else
				d=(b[i]+10)-a[i];
		}
		c+=d;
	}
	cout<<c<<endl;
	return 0;
}