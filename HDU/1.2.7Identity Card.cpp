#include<stdio.h>

char* comefrom(char *str){
	char *s;
	if(str[0]=='3'&&str[1]=='3')s="Zhejiang";
	else if(str[0]=='1'&&str[1]=='1')s="Beijing";
	else if(str[0]=='7'&&str[1]=='1')s="Taiwan";
	else if(str[0]=='8'&&str[1]=='1')s="Hong Kong";
	else if(str[0]=='8'&&str[1]=='2')s="Macao";
	else if(str[0]=='5'&&str[1]=='4')s="Tibet";
	else if(str[0]=='2'&&str[1]=='1')s="Liaoning";
	else if(str[0]=='3'&&str[1]=='1')s="Shanghai";
	return s;
}

int main(){
	int cases;
	char str[18];
	scanf("%d",&cases);
	while(cases--){
		scanf("%s",str);
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",comefrom(str),
		str[10],str[11],str[12],str[13],str[6],str[7],str[8],str[9]);
	}
}