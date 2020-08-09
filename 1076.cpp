#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	int a,b;
	string str;
	cin >> n ;
	for (int i = 0; i < n-1; ++i)
	{
		scanf("%d %d",&a,&b);
		str=str+to_string(a+b)+"\n";
	}
	scanf("%d %d",&a,&b);
	str=str+to_string(a+b);
	cout << str;
}