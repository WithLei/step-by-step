#include<stdio.h>  
#include<string.h>  
int f[1005][105];  
void init()  
{  
    memset(f,0,sizeof(f));  
    f[0][1]=1;  
    f[1][1]=1;  
    f[2][1]=2;  
    f[3][1]=4;  
  
    for(int i=4;i<=1000;i++)  
    {  
        int add=0;  
        for(int j=1;j<=100;j++)  
        {  
            f[i][j]=f[i-1][j]+f[i-2][j]+f[i-4][j]+add;  
            add=f[i][j]/10000;  
            f[i][j]%=10000;  
            if(add==0&&f[i][j]==0)break;  
        }  
    }  
}  
int main()  
{  
    int n;  
    init();  
    while(scanf("%d",&n)!=EOF)  
    {  
        int k=100;  
        while(!f[n][k])k--;  
        printf("%d",f[n][k--]);  
        for(;k>0;k--)  
        {  
            printf("%04d",f[n][k]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
