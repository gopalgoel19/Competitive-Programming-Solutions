#include<stdio.h>
int main()
{
int h,t,n,i;
double c;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d%lf%d",&h,&c,&t);
	if(h>50&&c<0.7&&t>5600)
		printf("10\n");
	else if(h>50&&c<0.7)
		printf("9\n");
	else if(c<0.7&&t>5600)
		printf("8\n");
	else if(h>50&&t>5600)
		printf("7\n");
	else if(h>50||c<0.7||t>5600)
		printf("6\n");
	else if(h<=50&&c>=0.7&&t<=5600)
		printf("5\n");
	}
return 0;
} 
