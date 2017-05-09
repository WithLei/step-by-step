#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char abc[5]={'a','e','i','o','u'};
char ABC[5]={'A','E','I','O','U'};
int main(){
	int cases;
	char str[52];
	scanf("%d",&cases);
	while(cases--){
		scanf("%s",str);
		for(int i=0;i<strlen(str);i++){
			if(str[i]>='a'&&str[i]<='z'){
				for(int ii=0;ii<5;ii++){
				if(str[i]==abc[ii]){
					str[i]=ABC[ii];
					break;
				}
			}
			}
			if(str[i]>='A'&&str[i]<='Z'){
				int flag=1;
				for(int ii=0;ii<5;ii++){
					if(str[i]==ABC[ii]){
						flag=0;
						break;
					}
				}
				if(flag==1)str[i]+=32;
			}
		}
		puts(str);
	}
}