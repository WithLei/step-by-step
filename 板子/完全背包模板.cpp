#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream> 
using namespace std;
int main()
{
    int M,N;                                     ///MΪ�����ܸ���   NΪҩ������
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        int a[M+5];                              ///�ȿ�һ��һλ��������װ��ͬ����ʱ�����Ž�
        memset(a,0,sizeof(a));                   ///��һ������������ıȽ�
        int m[N+5],v[N+5];
        for(int i=1;i<=N;i++)
        {
            scanf("%d %d",&m[i],&v[i]);
        }
        for(int j=1;j<=N;j++)                  ///�ɹ�ѡ���ҩ������һ�������
        {
            for(int k=1;k<=M;k++)              ///��������һ�������
            {
                if(m[j]<=k)                        ///��������������װ����ҩ��ʱ
                {
                    a[k]=max(a[k],a[k-m[j]]+v[j]);              /*����װ��һ�š���ҩ�ĵļ�ֵ  ��  ֮ǰ�����Ž⣨�����Ѿ�װ�м�����ҩ�ģ���Ƚϣ��ó��µ����Ž�*/
                }
            }
        }
        printf("%d\n",a[M]);                    ///�������ΪMʱ�����Ž⣨��ʱ����ҩ�ľ����������ڣ�
    }
    return 0;
}