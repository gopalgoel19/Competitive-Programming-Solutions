#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll a, b;
	scanf("%lld %lld", &a, &b);
	if(a == b && a%2 == 0)printf("0\n");
	else{
		if(a%2 == 0)a++;
		ll n = ((b-a)/2)+1;
		printf("%lld\n", (n*(2*a + (n-1)*2))/2);
	}
	return 0;
}