#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000+7;
bool cmp(const int x,const int y){
     if(x!=y)return x>y;
     }

int main(){
  int n,m;
  while(cin >> n){
  	long long A[maxn]={0},B[maxn]={0};
  	cin >> m;
 	for(int i=0;i<n;i++){
  		cin >> A[i] ;
	}
   	for(int i=0;i<m;i++){
    	cin >> B[i];
    }
    sort(A,A+n,cmp);
    sort(B,B+m,cmp);
    long long result=0;
    for(int i=0;i<min(n,m);i++){
    	result+=A[i]*B[i];
    }
    cout << min(n,m) <<" " << result << endl;
  	}
 }
