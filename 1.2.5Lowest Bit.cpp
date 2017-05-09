#include<stdio.h>
int pow(int f){
	int range=1;
	for(int i=0;i<f-1;i++){
		range*=2;
	}
	return range;
}

int main(){
	int num,t[33];
	while(~scanf("%d",&num)&&num!=0){
		int i=0;
		while(num!=0){
			t[i]=num%2;
			num/=2;
			i++;
		}
		int flag=1;
		for(int ii=0;ii<i;ii++){
			if(t[ii]!=1)flag++;
			else break;
		}
		printf("%d\n",pow(flag));
	}
}