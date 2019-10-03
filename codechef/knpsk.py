# cook your dish here
memo = dict()
n = int(input())
s, l1, l2 = 0, [], []
for i in range(n):
    w, p = map(int, input().split())
    if w == 1:
        l1.append(p)
    else:
        l2.append(p)
    s += w
l1 = sorted(l1)
l2 = sorted(l2)
l1 = l1[::-1]
l2 = l2[::-1]
dupl1 = l1[:]
dupl2 = l2[:]
memo[0] = 0
for i in range(2, s+1, 2):
    max2, max1 = 0, 0
    if len(l2) > 0:
        max2 = l2[0]
    k = True
    if len(l1) > 1:
        max1 = l1[0] + l1[1]
    elif len(l1) == 1:
        max1 = l1[0]
        k = False
    if max2 > max1:
        memo[i] = memo[i-2] + max2
        l2.pop(0)
    else:
        memo[i] = memo[i-2] + max1
        if k:
            l1.pop(0)
            l1.pop(0)
        else:
            l1.pop(0)
if len(dupl1) > 0:
    memo[1] = dupl1[0]
    dupl1.pop(0)
else:
    memo[1] = 0
for i in range(3, s+1, 2):
    max2, max1 = 0, 0
    if len(dupl2) > 0:
        max2 = dupl2[0]
    k = True
    if len(dupl1) > 1:
        max1 = dupl1[0] + dupl1[1]
    elif len(dupl1) == 1:
        max1 = dupl1[0]
        k = False
    if max2 > max1:
        memo[i] = memo[i-2] + max2
        dupl2.pop(0)
    else:
        memo[i] = memo[i-2] + max1
        if k:
            dupl1.pop(0)
            dupl1.pop(0)
        else:
            dupl1.pop(0)
for i in range(1, s+1):
    print(memo[i], end=" ")