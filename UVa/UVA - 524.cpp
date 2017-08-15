#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
map<int,int>p;

bool na(int *range,int cur,int t){
	for(int i=1;i<cur;i++){
		if(range[i]==t)return false;
	}
	return true;
}

bool isprime(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)return false;
	}
	return true;
}

void work(int num,int *range,int cur){
	if(cur==num&&p[1+range[num-1]]){
		cout << "1" ; 
		for(int i=1;i<num;i++)cout << " " << *(range+i) ;
		cout << endl;
	}
	else{
		for(int i=2;i<=num;i++){
			if(p[range[cur-1]+i]&&na(range,cur,i)){
				range[cur]=i;
				work(num,range,cur+1);
			}
		}
	}
}

int main(){
	int num,range[20]={0},cases=0;
	for(int i=2;i<16*16;i++){
		if(isprime(i))p[i]=1;
	}
	while(cin >> num){
		if(cases>=1)cout << endl;
		cout << "Case " << ++cases << ":" << endl;
		memset(range,0,sizeof(range));
		range[0]=1;
		work(num,range,1);
	}
	return 0;
}