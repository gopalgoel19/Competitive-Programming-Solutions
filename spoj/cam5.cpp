#include <bits/stdc++.h>
using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int count = 0;
VI G[100010];
int visited[100010];

int bfs(int x)
{
	queue<int> q;
	int ans = 0;
	if(visited[x])return 0;
	visited[x] = 1;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop();
		ans++;
		for (int j = 0; j < G[s].size(); j++) {
			int u = G[s][j];
			if (visited[u]) continue;
			visited[u] = true;
			q.push(u);
		}
	}
	if(ans == 1)return 0;
	return ans;
}

int main()
{
	scanf("%d", &tt);
	REP(qq, 0, tt){
		int n, e;
		scanf("%d %d", &n, &e);
		int inf = 0;
		int count = 0;
		for(int i = 0; i <= n; i++){G[i].clear(); visited[i] = 0;}
		for(int i = 0; i < e; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			G[x].PB(y); G[y].PB(x);
		}
		if(e == 0)printf("%d\n", n);
		else{
			for(int i = 0; i < n; i++){
				int k = bfs(i);
				if(k > 0)count++;
				inf += k;
			}
			printf("%d\n", count + (n-inf));
		}
	}
	return 0;
}