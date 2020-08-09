#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,tmp;
	scanf("%d,%d,%d",&a,&b,&c);
	int sz[3];
	sz[0]=a;sz[1]=b;sz[2]=c;
	for(int i = 0;i<3;i++){
		for(int i =0;i<3;i++){
			if(i!=2){
				if(sz[i]>sz[i+1]){
					tmp = sz[i+1];
					sz[i+1]=sz[i];
					sz[i]=tmp; 
				}
			}
		}
	}
	for(int i =0;i<2;i++){
		cout << sz[i] << " ";
	}
	cout << sz[2];
	return 0;
} 
