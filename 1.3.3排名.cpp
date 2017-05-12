#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct In{
	char id[22];
	int idd;
	int m;
	int title[12];
	int score;
}stu[1002];

/*
int cmp( const void *a , const void *b ) 
	{ 
	struct In *c = (In *)a; 
	struct In *d = (In *)b; 
	if(c->score != d->score) return d->score - c->score; 
	else return d->id - c->id; 
	}*/
	
int cmp(In x,In y)
{
    if(x.score!=y.score) return x.score>y.score;
    if(strcmp(x.id,y.id)!=0) return strcmp(x.id,y.id)<0;
}
	
int main(){
	int N,M,G;
	while(~scanf("%d",&N)&&N!=0){
		int grade[12]={0};
		scanf("%d%d",&M,&G);
		memset(stu,0,sizeof(stu[0])*1002);
		for(int i=0;i<M;i++){
			scanf("%d",&grade[i]);
		}
		for(int i=0;i<N;i++){
			scanf("%s%d",stu[i].id,&stu[i].m);
			for(int t=0;t<stu[i].m;t++){
				scanf("%d",&stu[i].title[t]);
			}
		}
		int pass=0;
		for(int i=0;i<N;i++){
			for(int t=0;t<stu[i].m;t++){
				int num=stu[i].title[t]-1;
				stu[i].score+=grade[num];
			}
			if(stu[i].score>=G){
				pass++;
			}
		}
//		qsort(stu,N,sizeof(stu[0]),cmp);
		sort(stu,stu+N,cmp);
		printf("%d\n",pass);
		for(int i=0;i<N;i++){
			if(stu[i].score>=G)
			printf("%s %d\n",stu[i].id,stu[i].score);
		}
	}
	return 0;
}