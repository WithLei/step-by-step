#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct node{
	int s;
	int e;
	bool move;
}way[202];

bool cmp(node x,node y){
	if(x.s!=y.s)return x.s<y.s;
}

int time(int num){
	int range,flag,now=0,judge=0;
	while(flag!=num){
		if(!(way+i)->move){
			if(judge)
		}
		if(i==num)i=0;
	}
	return range;
}

int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int num;
		memset(way,0,sizeof(way));
		scanf("%d",&num);
		for(int i=0;i<num;i++){
			scanf("%d%d",(way+i)->s,(way+i)->e);
		}
		sort(way,way+num,cmp);
		printf("%d\n",time(num));
	}
}