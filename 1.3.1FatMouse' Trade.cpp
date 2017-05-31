#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node{
	int j;
	int f;
	double ans;
}room[1002];

bool cmp(node x,node y){
	if(x.ans!=y.ans)return x.ans>y.ans;
}

int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)&&m!=-1||n!=-1){
		double range=0;
		memset(room,0,sizeof(room));
		for(int i=0;i<n;i++){
		scanf("%d%d",&(room+i)->j,&(room+i)->f);
		(room+i)->ans = (double)(room+i)->j / (room+i)->f;
		}
		sort(room,room+n,cmp);
		for(int i=0;m>0&&i<n;i++){
			if((room+i)->f <= m){
				m-=(room+i)->f;
				range+=(room+i)->j;
			}
			else{
				range+=(room+i)->j*(double)m/(room+i)->f;
				m=0;
			}
		}
		printf("%.3lf\n",range);
	}
} 


/*
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1
 */