#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e6+4;

LL work(char *num,int n){
	int len = strlen(num);
	LL maxnum = 0;
	for(int i=0;i<len;i++){
		LL temp = 0;
		for(int j=i;j<min(len,n+i);j++)
			temp=temp*2+num[j]-'0';
		maxnum=max(maxnum,temp);
	}
	
	return maxnum;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int cases;
	cin >> cases;
		for(int i=1;i<=cases;i++){
			int n;
			cin >> n;
			char num[maxn]={0};
			cin >> num;
			cout << "Case #" << i << ": ";
			cout << work(num,n) << endl;
		}
	return 0;
}
