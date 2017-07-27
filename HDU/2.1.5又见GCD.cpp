#include<stdio.h>
int work(int a,int c){
	if(a<c){
		int temp=a;
		a=c;
		c=temp;
	}
	while(c){
		int r=a%c;
		a=c;
		c=r;
	}
	return a;
}
int main(){
	int cases,c,a,b;
	while(~scanf("%d",&cases)){
		while(cases--){
			int k=2,flag=0;
		scanf("%d%d",&a,&b);
		while(flag==0){
			if(work(a,k*b)==b){
				c=k*b;flag=1;
			}
			else k++;
		}
		printf("%d\n",c);
		}
	}
}