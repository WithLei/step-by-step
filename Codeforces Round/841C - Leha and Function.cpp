#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 200009;
struct node{
	int num,cur;
}A[maxn],B[maxn];

bool cmpA(node x,node y){
	if(x.num != y.num)return x.num > y.num;
	else return x.cur < y.cur;
}

bool cmpB(node x,node y){
	if(x.num != y.num)return x.num < y.num;
	else return x.cur > y.cur;
}

bool cmp(node x,node y){
	return x.cur < y.cur;
}

int main(){
	int len;
	while(cin >> len){
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		for(int i=0;i<len;i++){
			cin >> 	A[i].num ;
			A[i].cur = i;
		}
		for(int i=0;i<len;i++){
			cin >> 	B[i].num ;
			B[i].cur = i;
		}
		sort(A,A+len,cmpA);
		sort(B,B+len,cmpB);
		for(int i=0;i<len;i++){
			A[i].cur=B[i].cur;
		}
		sort(A,A+len,cmp);
		cout << A[0].num;
		for(int i=1;i<len;i++)cout << ' ' << A[i].num; 
		cout << endl;
	}
}
 