#include<bits/stdc++.h>
using namespace std;
const int maxn = 33;
long long result[maxn]={0,1,3};

int main(){
	int cases;
	for(int i=3;i<=30;i++){
		result[i] = result[i-2]*2+result[i-1];
	}
	cin >> cases;
	while(cases--){
		int num;
		cin >> num;
		cout << result[num] << endl;
	}
} 
