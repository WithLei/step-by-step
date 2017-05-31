#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int score[]={50,60,70,80,90,100};

struct node{
	int rank;
	int time;
	int id;
	int s;
}stu[102];

int to_time(char *str){
	return (*str-48)*36000+(*(str+1)-48)*3600+(*(str+3)-48)*600+(*(str+4)-48)*60+(*(str+6)-48)*10+*(str+7)-48;
}

int ans(int n,int t){
	int time=0;
	for(int i=0;i<n;i++){
		if((stu+i)->rank==(stu+t)->rank&&(stu+i)->time < (stu+t)->time)time++;
		if(time>=n/2)return 0;
	}
	return 1;
}

bool cmp0(node x,node y){
	if(x.rank!=y.rank)return x.rank>y.rank;
	else if(x.time!=y.time)return x.time<y.time;
}

bool cmp1(node x,node y){
	if(x.id!=y.id)return x.id<y.id;
}

int main(){
	int n;
	char str[10];
		while(scanf("%d",&n)&&n>0){
		memset(stu,0,sizeof(stu));
		int num[6]={0};
		for(int i=0;i<n;i++){
			scanf("%d%s",&(stu+i)->rank,str);
			(stu+i)->time=to_time(str);
			(stu+i)->id=i;
			num[(stu+i)->rank]++;
			}
			sort(stu,stu+n,cmp0);
			int now=0;
			while(now<n){
				int flag=0;
				for(int t=num[(stu+now)->rank];t>0;t--){
					if((stu+now)->rank==5){
						(stu+now)->s=100;
					}
					else if((stu+now)->rank==0){
						(stu+now)->s=50;
					}
					else if(flag<num[(stu+now)->rank]/2||num[(stu+now)->rank]==1){
						(stu+now)->s=score[(stu+now)->rank]+5;
						flag++;
//						printf("id==%d flag==%d\n",(stu+now)->id,flag);
					}else{
						(stu+now)->s=score[(stu+now)->rank];
					}
					now++;
				}
			}
		sort(stu,stu+n,cmp1);
		for(int i=0;i<n;i++){
			printf("%d\n",(stu+i)->s);
		} 
		printf("\n");
	}
}

/*
4
5 06:30:17
4 07:31:27
3 08:12:12
0 05:23:13
4
3 11:11:10
3 11:11:13
3 11:11:12
3 11:11:11
1
0 06:30:17
-1
*/