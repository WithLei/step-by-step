#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		int i=1;
		while(true){
			if(a-i<0){printf("Vladik\n");break;}
			else a-=i;
			i++;
			if(b-i<0){printf("Valera\n");break;}
			else b-=i;
			i++;
		}
	}
}