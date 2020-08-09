#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 100, i;
    float sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - (1.0 / i);
        else
            sum = sum + (1.0 / i);
    }
    printf("%f", sum);
    return 0;
}