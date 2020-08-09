#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	float a,b,c;
	cin >> a >> b >> c;
	float p = (a+b+c)/2;
	printf("%.3f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
