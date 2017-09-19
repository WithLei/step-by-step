#include<bits/stdc++.h>
//快速幂 
typedef long long LL;
using namespace std;

int quickmod(int n,int k,int mod){
		int temp = 1;
	while(k){
		if(k%2==0)temp=(temp*n)%mod;
		k/=2;
		n=(n%mod)*(n%mod);
	}
	return temp;
}

int main(){
	int n,k,mod;
	LL range = 0;
//	cin << n << k << mod;//n为底，k为幂 +
	n = 2,k = 23333333,mod = 233333;
	for(int i=0;i<=k;i++){
		range=( range+quickmod(n,i,mod) ) % mod;
	}
	cout << range << endl;
	return 0;
}
