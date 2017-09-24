#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 100000+13;
int main(){
		LL n,a[4],num,result=0,maxnum=-99999999,minnum=99999999;
		cin >> n >> a[0] >> a[1] >> a[2];
		for(int i=0;i< n;i++){
			cin >> num;
			if(num>=maxnum)maxnum = num;
			if(num<=minnum)minnum = num;
		}
		for(int i=0;i<3;i++){
			if(a[i]>=0)result+=a[i]*maxnum;
			else result+=a[i]*minnum;
		}
		cout << result << endl;
}
