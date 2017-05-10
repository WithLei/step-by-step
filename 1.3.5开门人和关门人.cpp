#include<stdio.h>
struct{
	char id[100];
	char in[8];
	char out[8];
}man[100];

long long time(char *s){
	long long range;
	range=(s[0]*10+s[1])*3600+(s[3]*10+s[4])*60+s[6]*10+s[7];
	return range;
}

int main(){
	int cases;
	while(~scanf("%d",&cases)){
		int num,flagin,flagout;
		while(cases--){
			long open=5000000;
			long close=-1; 
			scanf("%d",&num);
			for(int i=0;i<num;i++){
				scanf("%s%s%s",man[i].id,man[i].in,man[i].out);
				for(int t=0;t<8;t++){
					man[i].in[t]-=48;
					man[i].out[t]-=48;
				}
//				printf("in==%d open==%d\nout==%d close==%d\n",time(man[i].in),open,time(man[i].out),close);
				if(time(man[i].in)<open){flagin=i;open=time(man[i].in);}
				if(time(man[i].out)>close){flagout=i;close=time(man[i].out);}
			}
			printf("%s %s\n",man[flagin].id,man[flagout].id);
		}
	}
}