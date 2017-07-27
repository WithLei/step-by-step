#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool gcd(int num){
	if(num==1)
		return false;
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)
			return false;
	}
	return true;
}

int main(){
	int cases,range=0,num;
	while(~scanf("%d",&cases)){
		range=0;
	while(cases--){
		scanf("%d",&num);
		if(gcd(num))range++;
	}
	printf("%d\n",range);
	}
	return 0;
}