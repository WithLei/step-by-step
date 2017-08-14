#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream> 
using namespace std;
int main()
{
    int M,N;                                     ///M为背包总负重   N为药材种类
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        int a[M+5];                              ///先开一个一位数组用来装不同重量时的最优解
        memset(a,0,sizeof(a));                   ///清一下零用于下面的比较
        int m[N+5],v[N+5];
        for(int i=1;i<=N;i++)
        {
            scanf("%d %d",&m[i],&v[i]);
        }
        for(int j=1;j<=N;j++)                  ///可供选择的药材种类一点点增加
        {
            for(int k=1;k<=M;k++)              ///背包负重一点点增加
            {
                if(m[j]<=k)                        ///当背包重量可以装下新药材时
                {
                    a[k]=max(a[k],a[k-m[j]]+v[j]);              /*“再装入一颗”新药材的价值  和  之前的最优解（可能已经装有几颗新药材）相比较，得出新的最优解*/
                }
            }
        }
        printf("%d\n",a[M]);                    ///输出背包为M时的最优解（此时所有药材均被考虑在内）
    }
    return 0;
}