#include<bits/stdc++.h>
#include<string>
#define qx 100000001
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); //optimizes iostream!!!
	cin.tie(0);

int n,i;
long int ar[1000];
string pc[1000];
cin>>n;
for(i=0;i<n;i++)
{
	cin>>ar[i]>>pc[i];
}
long int a=qx,b=qx,c=qx,ab=qx,ac=qx,bc=qx,abc=qx;
bool flags[]={0,0,0,0,0,0,0};
for(i=0;i<n;i++)
{	if(pc[i].length()==3)
	{if(ar[i]<abc)
	abc=ar[i];flags[0]=1;}
	
	 if(pc[i]=="AB"||pc[i]=="BA")
	{if(ar[i]<ab)
	ab=ar[i];flags[1]=1;
	}

	 if(pc[i]=="BC"||pc[i]=="CB")
        {if(ar[i]<bc)
        bc=ar[i];flags[2]=1;
        }

	 if(pc[i]=="AC"||pc[i]=="CA")
        {if(ar[i]<ac)
        ac=ar[i];
        }
	
	 if(pc[i]=="A"&&ar[i]<a)
	a=ar[i];
	 if(pc[i]=="B"&&ar[i]<b)
	b=ar[i];
	 if(pc[i]=="C"&&ar[i]<c)
	c=ar[i];
}
int sums[7]={a,b,c,ab,ac,bc,abc};
int sumset[13]={a+b+c,ab+c,ab+bc,ab+ac,ab+abc,ac+b,ac+bc,ac+abc,bc+a,bc+ac,bc+ab,bc+abc,abc};
int minsum=sumset[0];
for(i=0;i<13;i++)
if(minsum>sumset[i])
 minsum=sumset[i];
if(minsum<qx)
cout<<minsum;
else
cout<<-1;
return 0;
}
