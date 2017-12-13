#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

int work(int side,int man){
	int result=0;
	int temp = sqrt(man);
    if(man==temp*temp)
        result = temp*2;
    else if((temp+1)*(temp+1)-man>man-temp*temp) 
        result = (temp+1)*2-1;
    else
        result = (temp+1)*2;
	return result;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,m,x,y;
	while(cin >> n){
		cin >> m >> x >> y;
		int side = min(n,m);
		int man = min(x,y);
		int ans1 = side+(man%side>0);
		int ans2 = work(side,man);
//		cout << ans1 << " " << ans2 << endl;
		cout << min(ans1,ans2) << endl;
	}
	return 0;
} 
