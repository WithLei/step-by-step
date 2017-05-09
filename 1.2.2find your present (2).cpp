#include<stdio.h>
int main(){
	int cases,a;
	while(~scanf("%d",&cases)&&cases!=0){
		int range=0; 
		while(cases--){
		scanf("%d",&a);
		range^=a;
		}
		printf("%d\n",range);
	}
}