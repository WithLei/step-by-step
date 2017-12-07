#include<bits/stdc++.h>
using namespace std;
const int maxn = 55;
int main(){
	long long result[maxn]={0,0,1,2,3},cases;
	cin >> cases;
	for(int i=4;i<=50;++i){
		result[i] = result[i-1]+result[i-2];
	}
	for(int i=0;i<cases;i++){
		int a,b;
		cin >> a >> b;
		cout << result[b-a+1] << endl;
	}
}
