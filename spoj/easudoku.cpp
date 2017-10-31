#include <bits/stdc++.h>

using namespace std;

int m[9][9];

bool valid(int x, int y, int n) {
  for (int i = 0; i < 9; i++)
    if (m[i][y] == n) 
      return false;

  for (int i = 0; i < 9; i++)
    if (m[x][i] == n)
      return false;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (m[i+(x-(x%3))][j+(y-(y%3))] == n) 
        return false; 

  return true;
}

bool solve(int m[][9]) {
  bool poss = true;
  int x, y;
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++)
      if (m[i][j] == 0) {
        x = i;
        y = j;
        poss = false;
        goto a;
      }
a:
  if (poss) 
    return true;
  else {
    for (int i = 1; i <= 9; i++) {
      if (valid(x, y, i)) {
        m[x][y] = i;

        if (solve(m)) 
          return true;
        else
          m[x][y] = 0;
      }
    }

    return false;
  }
}

int main() {
  int n;
  scanf("%d", &n);

  while (n--) {
    for (int i = 0; i < 9; i++)
      for (int j = 0; j < 9; j++)
        scanf("%d", &m[i][j]);
    scanf("\n");

    if (solve(m)) {
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
          printf("%d ", m[i][j]);
        printf("\n");
      }
    } else 
      printf("No solution\n");
  }

  return 0;
}
