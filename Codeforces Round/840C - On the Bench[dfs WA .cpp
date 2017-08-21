#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
const long long maxn = 1000000007;
long long range = 0;
map<int,int>j;
int num[312],cases;

bool judge(long long num){
	if(sqrt(num)<=1000000){
		if(j[num])return false;
		else return true;
	}
	else{
		long long a = (long long)sqrt(num);
		if(a*a==num)return false;
		else return true;
	}
}

void dfs(int *arr,int cur){
	if(cur==cases){
		range++;
		range%=maxn;
	}
	else{
		for(int i=0;i<cases;i++){
			long long ll=num[i]*arr[cur-1];
			if(judge(ll)){
				arr[cur]=num[i];
				dfs(arr,cur+1);
			}
		}
	}
}
int main(){
	for(int i=1;i<1000000;i++)j[i*i]=1;
	while(cin >> cases){
		memset(num,0,sizeof(num));
		range=0;
		for(int i=0;i<cases;i++)cin >> num[i];
		int n[312]={0};
		dfs(n,0);
		cout << range << endl;
	}
}