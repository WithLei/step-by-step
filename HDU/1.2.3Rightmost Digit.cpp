#include<stdio.h>
int two[4]={6,2,4,8};
int three[4]={1,3,9,7};
int four[2]={6,4};
int seven[4]={1,7,9,3};
int eight[4]={6,8,4,2};
int nine[2]={1,9};
int main(){
	int cases;
	while(~scanf("%d",&cases)){
		while(cases--){
			int num,range=1;
			scanf("%d",&num);
			switch(num%10){
				case 0:range=0;break;
				case 1:range=1;break;
				case 2:range=two[num%4];break;
				case 3:range=three[num%4];break;
				case 4:range=four[num%2];break;
				case 5:range=5;break;
				case 6:range=6;break;
				case 7:range=seven[num%4];break;
				case 8:range=eight[num%4];break;
				case 9:range=nine[num%2];break;
				
			}
			printf("%d\n",range);
		}
	}
}