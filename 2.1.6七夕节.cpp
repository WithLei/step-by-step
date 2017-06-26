#include<cstdio>
#include<cstdlib>
#include<cstring> 
#include<string>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;

long long f(int num){
	long long range=1;
	int i;
	for(i=2;i<sqrt(num);i++){
		if(num%i==0){
		range+=i;
		range+=num/i;
		}
	}
	if(i*i==num)range+=i;
	return range;
}

int main(){
	int cases;
	cin >> cases;
	while(cases--){
	int num;
	cin >> num;
	cout << f(num) <<endl;		
	}
	return 0;
}