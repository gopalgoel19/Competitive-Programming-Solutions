import math

t = int(raw_input())
while t>0:
	n=int(raw_input())
	result=n
	r = int(math.sqrt(n))
	for i in range(2,r+1):
		if n%i==0:
			#print "prime",i
			result *=  (1.0 - 1.0/i)
		 	while n%i==0:
		 		n/=i
	if n>1:
		result*=(1.0 - 1.0/n);
	print int(result)