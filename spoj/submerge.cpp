#include <bits/stdc++.h>

#define MAX 10101
 
using namespace std;
 
vector<int> graph[MAX];
set<int> art;

int cont[MAX], parent[MAX];
int low[MAX], L[MAX];
 
void dfs(int x) {
  cont[x] = 1;
  int child = 0;
 
  for (auto i : graph[x]) {
    if (!cont[i]) {
      child++;
      parent[i] = x;
      low[i] = L[i] = L[x] + 1;
 
      dfs(i);
 
      low[x] = min(low[x], low[i]);
 
      if ((parent[x] == -1 && child > 1) ||
          (parent[x] != -1 && low[i] >= L[x]))
        art.insert(x);
 
    } else if (parent[x] != i)
      low[x] = min(low[x], L[i]);
  }
}
 
int main() {
  int n, m, a, b;

  while (scanf("%d %d", &n, &m) && (n || m)) {
    memset(parent, -1, sizeof(parent));
    memset(low, 0, sizeof(low));
    memset(L, 0, sizeof(L));
    memset(cont, 0, sizeof(cont));

    art.clear();
 
    for (int i = 0; i <= n; ++i)
      graph[i].clear();
 
    for (int i = 0; i < m; ++i) {
      scanf("%d %d", &a, &b);
      graph[a].push_back(b);
      graph[b].push_back(a);
    }
 
    dfs(1);
    printf("%d\n", art.size());
  }

  return 0;
}

