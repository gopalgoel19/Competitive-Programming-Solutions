#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX (1 << 20) + 1
#define LOG2(X) ((8 * sizeof (unsigned long long) - __builtin_clzll((X)) - 1))
 
typedef complex<double> comp;
typedef unsigned int uint;
 
int N;
comp a[MAX], b[MAX], c[MAX];
int ans[MAX];
 
inline uint rev(uint x) {
	x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1));
	x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2));
	x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4));
	x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8));
	
  return (((x >> 16) | (x << 16)) >> (32 - LOG2(N)));
}
 
void fft(comp *A, int inv) {
  int rr;
  for (int i = 0; i < N; ++i)
    if (i < (rr = rev(i)))
      swap(A[i], A[rr]);
 
  for (int s = 1; s < N; s <<= 1) {
		comp wm = comp(cos(inv * M_PI / s), sin(inv * M_PI / s));
 
    for (int k = 0; k < N; k += (s << 1)) {
      comp w = 1;
 
      for (int j = 0; j < s; ++j) {
        comp t = w * A[k + j + s];
        comp u = A[k + j];
 
        A[k + j] = u + t;
        A[k + j + s] = u - t;
 
        w *= wm;
      }
    }
  }
 
  if (inv == -1)
    for (int i = 0; i < N; ++i)
      A[i] /= N;
}
 
char str1[300001], str2[300001];
 
int main() {
  int n;
  scanf("%d", &n);
 
  for (int i = 0; i < n; ++i) {
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    memset(c, 0, sizeof c);

    scanf("%s %s", str1, str2);
    int n1 = strlen(str1), n2 = strlen(str2);
 
    for (int j = n1 - 1, k = 0; j >= 0; j--, k++)
      a[k] = str1[j] - '0';
 
    for (int j = n2 - 1, k = 0; j >= 0; j--, k++)
      b[k] = str2[j] - '0';
 
    for (N = 1; N < max(n1, n2); N <<= 1);
    N <<= 1;
 
    fft(a, 1);
    fft(b, 1);
    for (int j = 0; j <= N; ++j)
      c[j] = a[j] * b[j];
    fft(c, -1);
 
    for (int j = 0; j < n1 + n2; ++j) {
      ans[j] = ((int) round(c[j].real())) % 10;
      if (j < n1 + n2 - 1)
        c[j+1] += ((int) round(c[j].real())) / 10;
    }
 
    bool foi = false;
    for (int j = n1 + n2 - 1; j >= 0; --j) {
      if (ans[j] == 0 && !foi)
        continue;
      else if (ans[j] != 0 || foi) {
        printf("%d", ans[j]);
        foi = true;
      }
    }
 
    if (!foi)
      printf("0");
    printf("\n");
  }
  return 0;
}
