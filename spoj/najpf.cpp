#include <bits/stdc++.h>

#define MAX 1010101

using namespace std;

int table[MAX];
vector<int> occurs;

void preprocess(string patt) {
  int i = 1, len = 0;

  while (i < patt.size()) {
    if (patt[i] == patt[len])
      table[i++] = ++len;
    else if (len)
      len = table[len - 1];
    else
      table[i++] = 0;
  }
}

void search(string patt, string txt) {
  int i = 0, j = 0;

  while (i < txt.size()) {
    if (patt[j] == txt[i])
      i++, j++;

    if (j == patt.size()) {
      occurs.push_back(i - j);
      j = table[j - 1];
    } else if (i < txt.size() && patt[j] != txt[i]) {
      if (j)
        j = table[j - 1];
      else
        i++;
    }
  }
}

int main() {
  int n;
  string a, b;
  scanf("%d", &n);

  while (n--) {
    occurs.clear();  
    cin >> a >> b;
    preprocess(b);
    search(b, a);

    if (occurs.size() == 0)
      printf("Not Found");
    else {
      printf("%d\n", occurs.size());
      for (auto i : occurs)
        printf("%d ", i + 1);
    }

    printf("\n");
    if (n >= 1)
      printf("\n");
  }

  return 0;
}
