n=int(input())
for x in range(1,n+1):
	strs=""
	for xx in range(1,n+1-x):
		strs=strs+" "
	for xxx in range(1,2*x):
		strs=strs+"*"
	print(strs)		
for x in range(1,n):
	x=n-x
	strs=""
	for xx in range(1,n+1-x):
		strs=strs+" "
	for xxx in range(1,2*x):
		strs=strs+"*"
	print(strs)		
