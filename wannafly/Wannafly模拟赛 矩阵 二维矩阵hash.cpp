#include<bits/stdc++.h>
 
using namespace std;
 
const int maxn = 333;
typedef long long ll;
const ll mod = 1e9 + 7;
 
ll dp[maxn][maxn];
int n,k;
int main()
{
    while(~scanf("%d %d",&n,&k))
    {
        memset(dp,0,sizeof dp);
        int a,b;
        for(int i = 1;i < n;i++)
        scanf("%d %d",&a,&b);
        dp[0][0] = 1;
        for(int i = 1;i <= n;i++)
        {
            for(int j = 1;j <= k;j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1]*(k - j + 1);
                dp[i][j] %= mod;
            }
        }
        ll ans = 0;
        for(int i = 1;i <= k;i++)
        ans = (ans + dp[n][i]) % mod;
        printf("%lld\n",ans);
    }
}