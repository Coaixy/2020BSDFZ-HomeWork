#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,tmp;
	cin >> n;
	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (nums[j]>nums[j+1])
			{
				tmp = nums[j+1];
				nums[j+1]=nums[j];
				nums[j]=tmp;
			}
		}
	}
	cout << nums[n-1];
	return 0;
}