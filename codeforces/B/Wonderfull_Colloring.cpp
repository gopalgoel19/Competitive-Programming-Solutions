#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0,j,d=0;
        
        map<char,int>m;
      
        for(j=0;j<s.length();j++)
        m[s[j]]++;
        
        
        for(auto&i:m)
        {
            if(i.second>=2)
            c++;
            if(i.second==1)
            d++;
        }
      
        cout<<d/2+c<<"\n";
 
 
        
    }
 
}
