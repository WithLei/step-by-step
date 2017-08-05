#include<bits/stdc++.h>
#define MAXN 1050
typedef long long LL;
using namespace std;
LL dp[MAXN][11]={0};
LL num[MAXN][11]={0};
int spend[MAXN],hit[MAXN];
LL ans=0;
int best[MAXN];

struct SKILL
{
    int hit;
    int spend;
}a[MAXN];

int main()
{
		int n,m; 
        while(cin >> n >> m)
        {
            ans=0;
            memset(num,0,sizeof(num));
            memset(dp,0,sizeof(dp));
            memset(best,0,sizeof(best));

            int max_hit=0,max_def=0,max_hp=0;int lx,ly;
            for(int i=0;i<n;i++)
            {
                cin >> lx >> ly;
                num[lx][ly]++;
                if(max_def<ly)max_def=ly;
                if(max_hp<lx)max_hp=lx;
            }
            int l_num=0;
            for(int i=0;i<m;i++)
            {
                cin >> lx >> ly ;
                if(best[ly]!=0&&best[ly]<=lx)continue;
                best[ly]=lx;
                a[l_num].spend=lx;a[l_num].hit=ly;
                if(a[l_num].hit>max_hit)
                {
                    max_hit=a[l_num].hit;
                }
                l_num++;
            }
            m=l_num;
            if(max_hit<=max_def)
            {
               cout << "-1" << endl;
                continue;
            }
            for(int k_def=0;k_def<=10;k_def++)
            {
                if(k_def!=0)
                    for(int i=0;i<m;i++)
                    {
                        a[i].hit--;
                    }
                for(int i=1;i<=max_hp;i++)
                {
                    LL t=-1;
                    for(int j=0;j<m;j++)
                    {
                        if(a[j].hit<=0)continue;
                        if(i-a[j].hit<=0)
                        {
                            if(t==-1||t>a[j].spend)
                            {
                                t=a[j].spend;
                            }
                            continue;
                        }
                        if(t==-1||t>dp[i-a[j].hit][k_def]+a[j].spend)
                        {
                            t=dp[i-a[j].hit][k_def]+a[j].spend;
                        }
                    }
                    dp[i][k_def]=t;
                }
            }
            for(int i=0;i<=max_hp;i++)
            {
                for(int j=0;j<=10;j++)
                {
                    ans+=(dp[i][j]*num[i][j]);
                }
            }
            cout << ans << endl;
        }

}