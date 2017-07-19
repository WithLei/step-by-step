#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
const int maxn = 20;
int s[1<<maxn];
int main(){
	int D,I,cases;;
	cin >> cases;
	while(cases--){
		while(scanf("%d",&D)&&D!=-1){
			cin >> I;
		int k=1;
		for(int i=0;i<D-1;i++){
			 if(I%2){
 				k*=2;
 				I=(I+1)/2;
 			}else{
			 	k=k*2+1;
			 	I/=2;
			 }
		}
		cout << k << endl;
	}
	if(D==-1)break;
	}
} 