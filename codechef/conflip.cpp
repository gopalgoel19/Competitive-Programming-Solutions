#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
   {
   int g,r,q;
   long int n;
   cin>>g;
   for(int j=0;j<g;j++)
      {
      cin>>r;
      cin>>n;
      cin>>q;
      if(n%2==0)
        {
        cout<<n/2<<"\n";
        }
      else
        {
        if((r==1)&&(q==1))
          {
          cout<<((n/2))<<"\n";
          }
        if((r==1)&&(q==2))
           {
           cout<<((n/2)+1)<<"\n";
           }
         if((r==2)&&(q==2))  
           {
           cout<<((n/2))<<"\n";
           }
         if((r==2)&&(q==1))
            {
            cout<<((n/2)+1)<<"\n";
            }
        }
      }
      
   }
return 0;
} 