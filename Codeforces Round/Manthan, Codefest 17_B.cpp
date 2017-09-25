#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 100000+13;
int main(){
		LL n,a[8],num=0;
		cin >> n >> a[0] >> a[1] >> a[2];
		if(n){
			cin >> num;
			a[3]=a[0]*num;
			a[4]=a[1]*num;
			a[5]=a[2]*num;
		}
		for(int i=1;i < n;i++){
			cin >> num;
			if(num*a[2]>a[5]){
				a[5]=num*a[2];
				if(num*a[1]>a[4]){
					a[4]=num*a[1];
					if(num*a[0]>a[3]){
						a[3]=num*a[0];
					}
				}
			}
		}
		cout << a[3]+a[4]+a[5] << endl;
}
