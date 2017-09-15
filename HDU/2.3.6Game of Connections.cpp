//#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;

LL range[120]={1},num;
void work(){
	for(int i=1;i<103;i++){
		range[i]=range[i-1]*(4*i-2)/(i+1);
	}
}

int main(){
	work();
	while(cin >> num && num!=-1){
		cout << range[num] << endl;
	}
	return 0;
}