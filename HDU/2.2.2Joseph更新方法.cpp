#include<cstdio>
#include<iostream>
using namespace std;
int range[16] ;
bool work(int x,int n){
	int total = 2*n;
	int now = x%total;
	if(now==0)now=total;
	while(total>n){
		if(now>n){//yes
			now--;
			now+=x;
			total--;
			if(now%total!=0)now=now%total;
			else now = total;
		}
		else return false;
	}
	return true;
} 
int main(){
	int n;
	for(int i=1;i<14;i++){
		int x=i+1;
		while(!work(x,i)){x++;}
		range[i]=x;
	}
	while(cin >> n && n!=0){
		cout << range[n] << endl;
	}
}