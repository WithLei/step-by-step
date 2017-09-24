#include<bits/stdc++.h>
using namespace std;  
const int N = 21;  
const int inf = 2147483647;  
const int mod = 2009;  
__int64 f[N],s[N][N],ans;  
int main()  
{  
    int t,n,k,i,j;  
    f[0]=1;  
    for(i=1;i<N;i++)  
        f[i]=f[i-1]*i;  
    for(i=1;i<N;i++)  
    {  
        s[i][i]=1;  
        for(j=1;j<i;j++)  
            s[i][j]=s[i-1][j-1]+(i-1)*s[i-1][j];  
    }  
    scanf("%d",&t);  
    while(t--)  
    {  
        ans=0;  
        scanf("%d%d",&n,&k);  
        for(i=1;i<=k;i++)  
            ans+=s[n][i]-s[n-1][i-1];  
        printf("%.4f\n",(double)ans/f[n]);  
    }  
} 
