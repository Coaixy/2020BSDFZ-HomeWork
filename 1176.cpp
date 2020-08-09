#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 10;
	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		cout << nums[9-i] << " ";
	}
	cout << nums[0];
	return 0;
}