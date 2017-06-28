#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
		int a[202],b[202];
		int first;
		bool firstflag=false;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]==0){
				if(!firstflag){
					firstflag=true;
					first=i;
				}	
			}
		}
		for(int i=0;i<k;i++){
			scanf("%d",&b[i]);
		}
		a[first]=b[0];
		if(k>=2)puts("Yes");
		else if(k==1){
			for(int i=0;i<n-1;i++){
				if(a[i]>=a[i+1]){
					puts("Yes");
					return 0;
				}
			}
			puts("No");
		}
	return 0;
}