#include<stdio.h>

void output(int n,int m){
	int r;
	while(m){
		r=n%m;
		n=m;
		m=r;
	}
	if(n==1)  
           printf("YES\n");  
 	else  
           printf("POOR Haha\n");  
}

int main(){
	int m,n;
	while(~scanf("%d%d",&n,&m)&&(n!=-1||m!=-1)){
		output(n,m);
	}
}