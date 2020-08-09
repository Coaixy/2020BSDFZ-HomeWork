#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	while(scanf("%d",&a)!=EOF){
		if(a<0 || a>100){
			cout << "Score is error!" << endl;
		}else{
			if(90<=a && a<=100)cout << "A" <<endl;
			if(80<=a && a<90)cout << "B" <<endl;
			if(70<=a && a<80)cout << "C" <<endl;
			if(60<=a && a<70)cout << "D" <<endl;
			if(0<=a && a<60)cout << "E" <<endl;
		}
	}
	return 0;
}