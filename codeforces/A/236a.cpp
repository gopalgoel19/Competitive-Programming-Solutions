#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	int b[26];
	int flag=0;
	int i,j,c=0;
	for (i = 0; i < 26; ++i)
	{
		b[i]=0;
	}
	scanf("%s",a);
	for (i = 0; i < strlen(a);i++)
	{
		j=a[i];
		j=j-97;
		b[j]++;
	}
	for(i=0;i<26;i++)
	{
		if(b[i]>0)
			c++;
	}
	if(c%2==0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	



	return 0;
}