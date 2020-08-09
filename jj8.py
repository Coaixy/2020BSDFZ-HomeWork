def p(n):
    if str(n).isdigit() and n>1:
        for i in range(2,n-1):
            if n%i==0:
                return False
        return True
print(21)
string=""
for x in range(100,199):
	if p(x):
		string=string+str(x)+" "
string=string+"199"
print(string)