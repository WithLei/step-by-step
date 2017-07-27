#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int ccl(int num){
	int range=2;
	if(num==1){
		return 2;
	}else{
		for(int i=1;i<num;i++){
			range+=2*i*3;
		}
		return range;
	}
}

int main(){
	int cases,num;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&num);
		printf("%d\n",ccl(num));
	}
}