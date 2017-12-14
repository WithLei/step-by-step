#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

bool judge(int i,int s){
	int temp = i;
	int result = 0;
	while(i){
		result+=i%10;
		i/=10;
	}
	if(temp-result<s)
		return true;
	else 
		return false;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int l,r,s;
	while(cin >> l){
		cin >> r >> s;
		if(r<=s)cout << r-l+1 << endl;
		else{
			int result = 0;
//			int result = l<=s?s-l+1:0;
			for(int i=s>l?l:s;i<=r;i++){
				if(judge(i,s))
					result++;
			}
			cout << result << endl;
		}
	}
	return 0;
}
