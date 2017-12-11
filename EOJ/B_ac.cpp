#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int N, M;
    while(scanf("%lld%lld",&N,&M)!=EOF)
    {
    if (N>M)
    {
        int temp=N;
        N=M;
        M=temp;
    }
    if(N<=1)
    {
        printf("0\n");
    }
    /*
    当棋盘大小为 2×n 时，我们发现不同奇偶不同的行/列交替可达,
    此时有 2 组(n/2)的联通块与两组 n?(n/2)的联通块，
    答案为 2×(C(n/2) 2) +2×C(n?(n/2) 2)，就是(n/2)*(n/2-1)+(n-(n/2)*((n-n/2)-1))
    */
    else if(N==2)
    {
        long long int ans=0;
        ans=M-M/2;
        M/=2;
            printf("%lld\n",M*(M-1)+ans*(ans-1));
    }
    else if(N==3 && M==3)
    {
        printf ("28\n");
    }
    else
    {
        long long int ans=N*M;
        printf ("%lld\n",ans*(ans-1)/2);
    }
    }
    return 0;
}
