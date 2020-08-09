#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int money=0;
	cin >> money;
	money = money*10;
	cout << (money-money%3)/3 << " "<< money%3; 
	return 0;
}