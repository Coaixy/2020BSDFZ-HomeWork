while True:
	try:
		a,b=input().split()
		a=int(a)
		b=int(b)
		s=""
		c=0
		for x in range(a,b+1):
			num = int(x)
			gewei = num%10
			shiwei = num//10%10
			baiwei = num//100
			if gewei**3 + shiwei**3 + baiwei**3 == num:
				if c==0:
					s=s+str(x)
				else:
					s=s+" "+str(x)
				c=c+1
		if s!="":
			print(s)
		else:
			print("no")
	except:
		break