#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;
 
int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
	#endif
	int t, n, ans;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		vector<int> a(2*n);
		for(int i = 0; i < 2*n; ++i) {
			scanf("%d", &a[i]);
		}
		sort(a.begin(), a.end());
		ans = a[n+n/2];
		printf("%d\n", ans);
		for(int i = 0; i < n; ++i) {
			printf("%d %d ", a[i], a[i+n]);
		}
		printf("\n");
	}
	return 0;
} 