#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+7;
int main(){
	int n,num[maxn],temp,tt,cha=0;
	cin >> n >> temp;
	for(int i=0;i<n-1;i++){
		cin >> tt;
		num[i]=abs(tt-temp);
		temp = tt;
		if(num[i]>=cha)
			cha = num[i];
	}
	int result = 1e5+7;
	for(int i=0;i<n-2;i++){
		if(num[i]+num[i+1]<=cha){
			result = cha;
			break; 
		}
		else{
			result = min(num[i]+num[i+1],result);
		}
	}
	cout << result << endl;
}
