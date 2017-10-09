
//yashverma

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define F first
#define S second
#define pb push_back
#define Pi 3.141592653589793
#define MOD (1e9 + 7)
// For i/o
#define sd1(a) scanf("%d",&a)
#define sd2(a,b) scanf("%d %d",&a,&b)
#define sd3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sf scanf
#define pf printf
// For debugging
#define deb(a) printf("deb%d\n",a)

typedef pair<int,int> ii;
typedef long long ll;

map<ll , char> mp;

int main()
{
	ll a,b;
	scanf("%lld %lld",&a, &b);
	ll x = __gcd(a,b);
	ll lcm = (a*b)/(x);
	for(ll i = 1; i<lcm/a; i++)
		mp[i*a] = 'D';
	for(ll i = 1; i<lcm/b; i++)
		mp[i*b] = 'M';
	if(b > a)mp[lcm] = 'M';
	else mp[lcm] = 'D';
	ll d = 0,m = 0;
	ll prev = lcm;
	char pc = mp[lcm];
	for(auto it=  --mp.rbegin(); it!= mp.rend(); it++)
	{
		ll temp = 0;
		temp = prev - it->F;
		if(pc == 'D')d += temp;
		else m += temp;
		prev = it->F;
		pc = it->S;
	}
	ll temp = prev - 0;
	if(pc == 'D')d += temp;
	else m += temp;
	if(d > m)printf("Dasha\n");
	else if(d == m)printf("Equal\n");
	else printf("Masha\n");
	return 0;
}
