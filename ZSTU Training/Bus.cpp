#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
	LL a,b,f,k;
	while(cin >> a >> b >> f >> k){
		LL to = 1,cnt = 0,now = b - f;
		for(int i=0;i<a;i++){
			if(to){
				if(i==k-1){
					if(now<a-f){
						now=b-(a-f);
						cnt++;
					}
				}
				else if(now >= 2*(a-f)){
					now -= 2*(a-f);
				}
				else{
					if(i==k-1){
						if(now<f){
							now=b-f;
							cnt++;
						}
					}
					else if(now>=2*f){
						now-=2*f;
					}
					else{
						now=b-2*f;
						cnt++;
					}
					to=1;
				}
			}
		}
		if(now<0)cnt=-1;
		cout << cnt << endl;
	}
	return 0;
}
