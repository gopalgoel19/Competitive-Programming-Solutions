from collections import defaultdict as dd
for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    d = dd(int)
    s=0
    for i in range(n):
        s += d[l[i]]*(n-i)
        d[l[i]]+=i+1
    print(s)
