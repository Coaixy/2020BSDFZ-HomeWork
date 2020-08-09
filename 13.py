year,month=input().split("\\")
a=0
year=int(year)
month=int(month)
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
days2 = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
if year%400 == 0:
    a=1 #闰年
if (year%4 == 0) & (year%100 !=0):
    a=1 #闰年
if a==1:
	print(days2[month-1])
else:
	print(days[month-1])