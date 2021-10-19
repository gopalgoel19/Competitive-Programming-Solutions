// https://codeforces.com/contest/1110/problem/D
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>
#include <assert.h>
#include <array>
#include <random>
#include <chrono>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dadsadasda;

#define ri(a) dadsadasda=scanf("%d", &a)
#define rii(a,b) dadsadasda=scanf("%d %d", &a, &b)
#define riii(a,b,c) dadsadasda=scanf("%d %d %d", &a, &b, &c)
#define rl(a) dadsadasda=scanf("%lld", &a)
#define rll(a,b) dadsadasda=scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ALL(s) s.begin(),s.end()
#define SZ(s) (int)s.size()

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 1e6 + 30; // CAMBIAR ESTE
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N, M;
int CNT[MAXN];

int DP[MAXN][3][3];
int f(int p, int t1, int t2) {
    if (p == MAXN - 10)
        return 0;
    int &ret = DP[p][t1][t2];
    if (ret != -1)
        return ret;
    ret = -INF;
    FOR(t3, 0, 3) {
        int a = t1, b = t1 + t2, c = t1 + t2 + t3, d = t2 + t3, e = t3;
        if (a > CNT[p - 1] || b > CNT[p] || c > CNT[p + 1] || d > CNT[p + 2] || e > CNT[p + 3])
            continue;
        ret = max(ret, t1 + (CNT[p + 1] - c) / 3 + f(p + 1, t2, t3));
    }
    return ret;
}

int main() {
    memset(DP, -1, sizeof(DP));
    rii(N, M);
    FOR(i, 0, N) {
        int a; ri(a);
        CNT[a + 6]++;
    }
    int ans = 0;
    printf("%d\n", ans + f(1, 0, 0));
    return 0;
}
