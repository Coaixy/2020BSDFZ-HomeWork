#include <bits/stdc++.h>
using namespace std;
int main(){
	//Çë½ÐÎÒ±©Á¦¹í²Å 
	int a,b,c;
	cin >> a >> b >> c;
	if(a<b&&a>c)cout<<a;
	if(a<c&&a>b)cout<<a;
	if(b<a&&b>c)cout<<b;
	if(b<c&&b>a)cout<<b;
	if(c<a&&c>b)cout<<c;
	if(c<b&&c>a)cout<<c;
	return 0;
}
