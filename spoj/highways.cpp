#include <bits/stdc++.h>
using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define MAX 100010

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

vii G[MAX];
int d[MAX], e[MAX];

void solution(int n, int m, int start, int end)
{
	int i, j, u, v, wt, b, a;
	for(int i = 0; i <= n; i++){
		G[i].clear();
		d[i] = INF;
		e[i] = 0;
	}
	while(m--){
		scanf("%d %d %d", &u, &v, &wt);
		G[u].push_back(pii(wt, v));
		G[v].push_back(pii(wt, u));
	}
	d[start] = 0;
	priority_queue< pii, vector< pii >, greater< pii > > Q;
	Q.push(pii(0, start));

	while(!Q.empty()) {
		u = Q.top().second;
		b = Q.top().first;
		Q.pop();
		int size = G[u].size();
		for(i = 0; i < size; i++){
			v = G[u][i].second;
			a = G[u][i].first;
			if(e[v] == 0 && b + a <= d[v]) {
				d[v] = b+a;
				Q.push(pii(d[v], v));
			}
		}
		e[u] = 1;
		if(u == end) break;
	}
	if(d[end] == INF)printf("NONE\n");
	else printf("%d\n", d[end]);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, start, end;
		scanf("%d %d %d %d", &n, &m, &start, &end);
		solution(n, m, start, end);
	}
	return 0;
}