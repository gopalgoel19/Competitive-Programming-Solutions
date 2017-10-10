#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

int main()
{
	int tt;
	scanf("%d", &tt);
	REP(qq, 0, tt){
		int n, x, y;
		scanf("%d %d %d", &n, &x, &y);
		for(int i = 1; ;i++){
			if(x*i < n){
				if(x*i % y != 0)printf("%d ", x*i);
			}
			else break;
		}
		printf("\n");
	}
	return 0;
}