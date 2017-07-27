#include<stdio.h>
/*
void heart(int *a,int *b){
	int t;
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
}*/
int main(){
	int a,b,x,y;
	while(~scanf("%d%d",&x,&y)){
		a=x,b=y;
		if(a<b){
			int temp=a;
			a=b;
			b=temp;
		}
		while(b){
		int t=a%b;
		a=b;
		b=t;
		}
		printf("%d\n",x*y/a);
	}
}