t=int(raw_input())
i=0

def gcd(a,b):
	if b==0: return a
	else: return gcd(b,a%b)

while i<t:
	i+=1
	d=raw_input().split(" ")
	a=int(d[0])
	b=int(d[1])
	if a<b: a,b=b,a
	print gcd(a,b)