#include <iostream>
#include <cstdio> 
using namespace std;
int main(){
	double pi = 3.1415926; //定义圆周率 
	double r,h;
	cin >> r >> h;
	printf("%.2f",pi*r*2);
	cout << " ";
	printf("%.2f",pi*r*r); 
	cout << " ";
	printf("%.2f",pi*r*2*h); 
	cout << " ";
	printf("%.2f",pi*r*r*h); 
	return 0;
}
