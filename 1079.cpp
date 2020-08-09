#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i;
    i=0;
    string c="";
    while(scanf("%d %d",&a,&b)){
        if (a==0 && b == 0)
        {
            break;
        }
        if (i == 0){
            c += to_string(a+b);
        }else{
            c+="\n\n"+to_string(a+b);
        }i++;
    }cout << c;
    return 0;
}