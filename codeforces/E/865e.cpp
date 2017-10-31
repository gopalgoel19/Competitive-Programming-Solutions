#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>


using LL = long long ;
const LL inf = 1LL << 60;
const int kN = 14;
int a[kN], n;
int delta[kN];
int cnt[1 << kN];
LL f[1 << kN];

int decode(char c)
{
    if (c >= '0' && c <= '9') return c - '0';
    return c - 'a' + 10;
}

char encode(int x)
{
    if (x < 10) return x + '0';
    return x - 10 + 'a';
}

LL solve()
{
    for (int mask = 1; mask < 1 << n; ++ mask) {
        int p = __builtin_popcount((mask & -mask) - 1);
        cnt[mask] = cnt[mask ^ 1 << p] - delta[p];

        f[mask] = inf;
        if (cnt[mask] < 0 || cnt[mask] >= 16) continue;
        for (int i = 0; i < n; ++ i) if (mask >> i & 1) {
            int q = cnt[mask ^ 1 << i];
            if (q < 0 || q >= 16) continue;
            f[mask] = std::min(f[mask], f[mask ^ 1 << i] + (cnt[mask] * 1LL << 4 * i));
        }

    }
    return f[(1 << n) - 1];
}

int main()
{
    char str[15];
    scanf("%s", str);
    n = strlen(str);
    for (int i = 0; i < n; ++ i)
        a[i] = decode(str[n - 1 - i]);

    LL result = inf;
    for (int mask = 0; mask < 1 << n - 1; ++ mask) {
        bool ok = true;
        int sum = 0;
        for (int i = 0; i < n; ++ i) {
            int d = a[i];
            if (mask >> i & 1)
                d -= 16;
            if (i && (mask >> i - 1 & 1))
                d += 1;
            ok &= -16 < d && d < 16;
            sum += d;
            delta[i] = d;
        }
        if (ok && sum == 0)
            result = std::min(result, solve());
    }
    if (result == inf)
        puts("NO");
    else {
        for (int i = n - 1; i >= 0; -- i)
            putchar(encode(result >> 4 * i & 15));
        puts("");
    }
}