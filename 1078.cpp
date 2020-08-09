#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	string str="";
	while(scanf("%d %d",&a,&b)){
		if (a==0 && b==0)
		{
			break;
		}
		str+=to_string(a+b)+"\n";
	}
	cout << str;
	return 0;
}