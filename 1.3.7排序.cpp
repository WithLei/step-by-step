#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);
}

int main(){
	char str[1002],s[1002];
	long long num[1002]={0};
	while(~scanf("%s",str)){
		int flag=0,k=0;//上一个节点 
		for(int i=0;i<strlen(str);i++){
			if(str[i]=='5'&&str[i-1]!='5'&&i!=0){
				for(int t=flag,u=0;t<i;t++,u++){
					*(s+u)=*(str+t);
				}
				*(num+k)=atoll(s);k++;
				memset(s,0,sizeof(num[0]));
			}
			if(str[i]=='5')flag=i+1;
			if(i==strlen(str)-1&&str[i]!='5'){
			for(int t=flag,u=0;t<=i;t++,u++){
					*(s+u)=*(str+t);
				}
				*(num+k)=atoll(s);
				k++;
				memset(s,0,sizeof(num[0]));
			}
		}
		qsort(num,k,sizeof(num[0]),cmp);
		printf("%ld",num[0]);
		for(int i=1;i<k;i++){
			printf(" %ld",num[i]);
		}printf("\n");
		memset(num,0,sizeof(num[0]));
	}
}