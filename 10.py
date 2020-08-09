a,b,c=input().split()
a=float(a)
b=float(b)
c=float(c)
tmp = b**2-4*a*c
x1 = (-b+tmp**0.5)/(2*a)
x2 = (-b-tmp**0.5)/(2*a)
if x1>x2:
  print('%.2f'%x1, '%.2f'%x2)
else:
  print('%.2f'%x2, '%.2f'%x1)
