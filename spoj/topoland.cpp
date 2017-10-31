#include <bits/stdc++.h>

#define MAX 101010
#define oo 100000000

using namespace std;

int v[MAX];
int tree[MAX * 6];

void buildtree(int node, int a, int b) {
  if (a > b)
    return;

  if (a == b) {
    tree[node] = v[a];
    return;
  }

  buildtree(node * 2, a, (a + b) / 2);
  buildtree(node * 2 + 1, 1 + (a + b) / 2, b);
  tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

void updatetree(int node, int a, int b, int i, int j, int val) {
  if (a > b || a > j || b < i)
    return;

  if (a == b) {
    tree[node] += val;
    return;
  }

  updatetree(node * 2, a, (a + b) / 2, i, j, val);
  updatetree(1 + node * 2, 1 + (a + b) / 2, b, i, j, val);
  tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

int querytree(int node, int a, int b, int i, int j) {
  if (a > b || a > j || b < i)
    return -oo;

  if (a >= i && b <= j)
    return tree[node];

  int q1 = querytree(node * 2, a, (a + b) / 2, i, j);
  int q2 = querytree(1 + node * 2, 1 + (a + b) / 2, b, i, j);

  return max(q1, q2);
}

int main() {
  int t, n, m, q, a, b;
  char op;

  scanf("%d", &t);

  for (int cas = 0; cas < t; cas++) {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
      scanf("%d", &v[i]);

    buildtree(1, 0, n - 1);
    scanf("%d", &q);
    printf("Testcase %d:\n", cas);

    for (int i = 0; i < q; i++) {
      scanf("\n%c", &op);
      if (op == 'A') {
        scanf("%d", &a);
        m += a;
      } else if (op == 'B') {
        scanf("%d %d", &a, &b);
        updatetree(1, 0, n - 1, a, a, b - querytree(1, 0, n - 1, a, a));
      } else if (op == 'C') {
        scanf("%d %d", &a, &b);
        printf("%d\n", abs(m - querytree(1, 0, n - 1, a, b)));
      }
    }

    printf("\n");
  }

  return 0;
}
