#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n1,n2,n3,n=0;
	set<int> s;
	set<int> a;
	cin>>n1>>n2>>n3;
	for(i=0;i<n1;i++)
	{
		cin>>j;
		s.insert(j);
	}
	for(i=0;i<n2;i++)
	{
		cin>>j;
		if(s.find(j)==s.end())
		   s.insert(j);
		else
		  a.insert(j);   
	}
	for(i=0;i<n3;i++)
	{
		cin>>j;
		if(s.find(j)==s.end())
		   s.insert(j);
		else
		  a.insert(j);   
	}
	cout<<a.size()<<endl;
	for(set<int>::iterator it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<endl;
	}
	
} 