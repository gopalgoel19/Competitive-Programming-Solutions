for t in range(int(raw_input())):
	temp = 0
	d,n = raw_input().split()
	d = int(d)
	n = int(n)
	while d>0:
		n = (n*(n+1))/2
		d -= 1
	print n