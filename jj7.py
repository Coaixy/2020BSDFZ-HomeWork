n=int(input())
sz=input().split()
a=0
j=0
o=0
for x in sz:
	a=int(x)
	if (a%2==0) or (a==0):
		o=o+1
	else:
		j=j+1
print(j,o)
