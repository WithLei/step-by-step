#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 100+13;
const int modo = 998244353;
int dp[maxn][maxn][maxn];

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,x,k;
	while(cin >> n){
		cin >> x >> k;
		LL ans = 0;
		memset(dp,0,sizeof(dp));
		for(int i=x;i<=n;i++){
			dp[i][i][1]=1;
			ans++; 
			for(int j=x;j<i;++j){
				for(int l=x;l<j;++l){
					for(int z=1;z<=k;++z){
						//״̬ת�Ʒ���
						dp[i][j][1] += dp[i-j][l][z];
						dp[i][j][1] %= modo; 
					}
					/*
					dp[i][j][k]��ʾ����iԪ,���컨jԪ,����k�컨��jԪʱ�ж����ַ����� 
					*/
				}
				ans += dp[i][j][1];
				ans %= modo;
				for(int z=2;z<k;++z){ 
					dp[i][j][z]+=dp[i-j][j][z-1];
					dp[i][j][z]%=modo;
					ans+=dp[i][j][z];
					ans%=modo;
				} 
			}
		}
		cout << ans << endl;
	}
	return 0;
}
