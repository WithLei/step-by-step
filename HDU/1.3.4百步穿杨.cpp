#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct In{
	int x;
	int y;
}row[52];

int cmp( const void *a , const void *b ) 
	{ 
	struct In *c = (In *)a; 
	struct In *d = (In *)b; 
	if(c->x != d->x) return c->x - d->x; 
	else return d->y - c->y; 
	}  
	
int main(){
	int cases,n,a,b;
	scanf("%d",&cases);
	while(cases--){
		memset(row,0,sizeof(row));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d%d",&row[i].x,&row[i].y);
			}
		qsort(row,n,sizeof(row[0]),cmp);
		for(int i=0;i<n;i++){
			while(row[i].y--){
				printf(">+");
			for(int t=0;t<row[i].x-2;t++){
				printf("-");
			}
			puts("+>");
		}printf("\n");
		}
	}
}