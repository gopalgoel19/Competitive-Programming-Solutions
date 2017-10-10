#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int tt;
	scanf("%d", &tt);
	for(int qq = 1; qq <= tt; qq++){
		ll n,m;
		scanf("%lld %lld", &n, &m);
		if(((n-m)&((m-1)/2)) == 0)printf("1\n");
		else printf("0\n");
	}
    return 0;
}