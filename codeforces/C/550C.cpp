#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	string N;
	cin>>N;
	//Step 0
	int i = N.find('0');
	if(N[i]=='0')
	{
		cout<<"YES\n0\n";
		return 0;
	}
	i = N.find('8');
	if(N[i]=='8')
	{
		cout<<"YES\n8\n";
		return 0;
	}
	//Step 1
	int K=0;
	for(i=N.size()-1;i>=0;i--)
	{
		K = N[i]-'0';
		if(K%2==0)
			break;
	}
	if(K==4)
	{
		for(i--;i>=0;i--)
		{
			K = N[i]-'0';
			if(K%2==0)
			{
				cout<<"YES\n";
				cout<<K<<"4\n";
				return 0;
			}
		}
	}
	else
	{
		for(i--;i>=0;i--)
		{
			int T = N[i]-'0';
			if(T&1)
			{
				cout<<"YES\n";
				cout<<T<<K<<endl;
				return 0;
			}
		}
	}
	//Step 1 complete . We have ones digit
	//Now find corresponding tens digit
	cout<<"NO\n";
	return 0;
}

