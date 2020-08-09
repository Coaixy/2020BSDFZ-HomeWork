#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;//获取行数
	int sz[n];
	int a,b;
	for (int i = 0; i < n; ++i)
	{	
		cin >> a >> b;
		if (a>b)
		{
			sz[i]=a;
		}else{
			sz[i]=b;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << sz[i] << endl;
	}
	return 0;
}