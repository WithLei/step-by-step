#include<bits/stdc++.h>
using namespace std;
const int maxn = 55;

int main(){
	int cases,result[maxn]={0,1,2,3};
	for(int i=4;i<=50;i++){
		result[i]=result[i-2]+result[i-1];
	}
	cin >> cases;
	while(cases--){
		int num;
		cin >> num;
		cout << result[num] << endl;
	}
}
