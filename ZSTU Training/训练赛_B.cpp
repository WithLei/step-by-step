#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
	int cases,n,t,time[20];
	cin >> cases;
	while(cases--){
		memset(time,0,sizeof(time));
		cin >> n >> t;
		for(int i=0;i<n;i++){
			cin >> time[i];
		}
		int result=0,step=0,cha = 3700;
		bool flag = false;
		while(!flag){
			flag = true;
			for(int i=0;i<n;i++){
				if(abs(t-result-time[i])<=cha){
					cha=abs(t-result-time[i]);
					result+=time[i];
					flag = false;
				}
			}
			if(result<0)result=0;
			if(result>3600)result=3600;
			if(!flag)step++;
		}
		cout << step << " " << cha << endl;
	}
}
