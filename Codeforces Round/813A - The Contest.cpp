#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;

struct node{
	int s,e;
}contest[100002];


int main(){
	int cases;
		int time,num,total=0;
		scanf("%d",&time);
		for(int i=0;i<time;i++){
			scanf("%d",&num);
			total+=num;
		}
		int t;
		scanf("%d",&t);
		bool judge=false;
		int range;
		for(int i=0;i<t;i++){
			scanf("%d%d",&contest[i].s,&contest[i].e);
			if(total>=contest[i].s&&total<=contest[i].e){
				range=total;
				judge=true;}
		}
		if(!judge){
			for(int i=0;i<t;i++){
				if(total<=contest[i].s){
				range=contest[i].s;
				judge=true;
				break;}
			}
		}
		if(judge)printf("%d\n",range);
		else printf("-1\n");
	return 0;
}