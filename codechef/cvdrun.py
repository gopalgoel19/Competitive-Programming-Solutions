for _ in range(int(input())):
    n,k,x,y=map(int,input().split(' '))
    a=[0 for i in range(n)]
    while True:
        if(a[y]==1):
            print("YES")
            break
        if(a[x]==1):
            print("NO")
            break
        a[x]=1
        x=(x+k)%n
'''problem code- CVDRUN
    contest code- OCT20B'''
