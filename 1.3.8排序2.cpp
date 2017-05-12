#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);
}

int pow(int i){
	int range=1;
	for(int t=0;t<i;t++){
		range*=10;
	}
	return range;
}

int main(){
	int a[5],num[5][5],range[200],x=0;
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	do{
		if(x!=0){
			printf("\n");
		}x=1;
		memset(range,0,sizeof(range[0])*200);
		int flag=0;
		for(int i=0;i<4;i++){
			for(int t=0;t<4;t++){
				num[i][t]=pow(i)*a[t];
			}
		}
		for(int i=0;i<4;i++){
			for(int ii=0;ii<4;ii++){
				for(int iii=0;iii<4;iii++){
					for(int k=0;k<4;k++){
							if(num[0][i]+num[1][ii]+num[2][iii]+num[3][k]>1000&&i!=ii&&i!=iii&&i!=k&&ii!=iii&&ii!=k&&iii!=k){
							range[flag]=num[0][i]+num[1][ii]+num[2][iii]+num[3][k];
							flag++;
						}
						
					}
				}
			}
		}
		qsort(range,flag,sizeof(range[0]),cmp);
		for(int i=0;i<flag;i++){
			if(range[i]==range[i+1])continue;
			printf("%d",range[i]);
			if(range[i]/1000==range[i+1]/1000&&range[i]!=range[i+1]){
				printf(" ");
			}
			else if(range[i]/1000!=range[i+1]/1000&&range[i]!=range[i+1]||i==flag-1)printf("\n");
		}
	}while(~scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])&&a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0);
}

/*
1 2 3 4
1 1 2 3
0 1 2 3
0 0 0 0*/