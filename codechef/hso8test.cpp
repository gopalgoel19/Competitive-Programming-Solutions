#include<stdio.h>
int main(){
int amt;
float bal;
scanf("%d",&amt);
scanf("%f",&bal);
if(((float)amt+0.5)>bal || amt%5 !=0)
printf("%.2f",bal);
else
printf("%.2f",bal-0.5-(float)amt);
return 0;
}
