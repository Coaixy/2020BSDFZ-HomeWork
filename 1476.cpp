#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double pi = 0, i, t = 1;
    cin >> n;
    for (i = 1; i <= 4 * n - 1; i = i + 2)
    {
        pi = pi + t / i;
        t = -t;
    }
    printf("%.5f", 4 * pi);
    return 0;
}   