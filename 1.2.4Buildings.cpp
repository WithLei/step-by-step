#include<stdio.h>
int main(){
	int cases,x,y,num;
	scanf("%d",&cases);
	while(cases--){
		int sum=0;
		scanf("%d%d",&x,&y);
		while(x--){
			for(int i=0;i<y;i++){
				scanf("%d",&num);
				if(num==1)sum++;
			}
		}
		printf("%d\n",sum);
	}
}