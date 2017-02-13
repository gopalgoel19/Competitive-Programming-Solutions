#include<stdio.h>
long point(long);
int main()
{
	printf("%d\n", sizeof(long));
	int t;long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lu",&n);
		printf("%lu\n",point(n));
	}
	return 0;
}
long point(long n)
{
	if(n==1)
	return 0;
	if(n%2==0)
	return ((n/2)*(n/2)+2*point(n/2));
	else
	return ((n/2)*(n/2+1)+point(n/2)+point(n/2+1));
}