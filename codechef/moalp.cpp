/*************************************************************

				Created by shivaank

**************************************************************/
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
//keycode  87 = KP_End KP_1 KP_End KP_1
typedef long long ll;
typedef vector<int> vi;

//#define x first 
//#define y second

typedef vector<ll> vll;
typedef pair<ll, ll>ii;
typedef pair<ll, ll>mypair;
typedef vector<ii> vii;
typedef set<ll> sll;
typedef map<string, ll> msl;

#define rep(i, a, b) \
for (int i = int(a); i < int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000 // 2 billion
#define mod 1000000007
#define mx 200001

string decToHexa(ll n) 
{    
    // char array to store hexadecimal number 
    string hexa; 
      
    // counter for hexadecimal number array 

    while(n!=0) 
    {    
        // temporary variable to store remainder 
        ll temp  = 0; 
          
        // storing remainder in temp variable. 
        temp = n % 16; 
          
        // check if temp < 10 
        if(temp < 10) 
        { 
            hexa += (temp + 48); 
        } 
        else
        { 
            hexa += (temp +  55); 
        } 
          
        n = n/16; 
    } 
      
    // printing hexadecimal number array in reverse order 
    return hexa; 
}


int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t,n,k,ctr = 0,r, sum=1, m,flag = 0,x,y,a=0,b=0,c=0,d,ind,q,curr,ans=0,i,found,first;
	
	ll l;
	string s,temp;
	
	unordered_map<int, int>mymap;
	unordered_map<int, int> ::iterator itr;
	mymap[0] = 0;
	std::stringstream stream;
	for(int i = 1;i<=2000000;i++)
	{
		
		s = decToHexa(i);
		ctr = 0;
		//cout<<s<<" "; 
		rep(j,0,s.size())
		{
			if(s[j]>= 'A' && s[j]<='F')
				ctr++;
		}
		mymap[i] = ctr;		
		if(i>1)
			mymap[i] += mymap[i-1];
		//cout<<i<<" : "<<mymap[i]<<"\n";
	}
	
	cin>>t;
	while(t--)
	{	
		cin>>l>>r;
		
		if(l == 1)
			cout<<mymap[r]<<"\n";
		else
			cout<<mymap[r] - mymap[l-1]<<"\n";
		
	}
	return 0;
}
