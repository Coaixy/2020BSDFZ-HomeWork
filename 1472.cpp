#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n;
    cin >> n ;
    int num;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    num = c*100+b*10+a;
    cout << num ;
    return 0;
}