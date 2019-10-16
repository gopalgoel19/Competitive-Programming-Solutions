#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t,i,j,n,msv,icount;
	cin>>t;
	while(t--)
	{
	       msv =0; // if all integers are co prime to every other element
	    cin>>n;
	    vector<bool> vis(n,false); // if a no. is visited
	    vector<int> a(n);
	    for(i=0;i<n;i++)
	    {cin>>a[i];
	     if(a[i]==1)          //coz 1 can divide anyone
	     msv=i;
	    }
	   
	    for(i=n-1;i>msv;i--)
	    {   icount =0;
	        if(a[i]==1)
	        break;
	         j =i;
	         if(vis[i]==true)  // no. visited
	         continue;
	        while(j--)
	        { 
	            if(a[j]%a[i]==0)
	            {icount++;
	            vis[j] = true;
	            }
	        }
	        vis[i] = true;
	        msv = max(icount,msv);  // check for maximum
	    }
	    cout<<msv<<'\n';
	    
	}
}
