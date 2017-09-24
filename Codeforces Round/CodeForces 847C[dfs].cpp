#include<bits/stdc++.h>  
#define rep(i,a,b) for(int i=a;i<=b;i++)  
#define dep(i,a,b) for(int i=a;i>=b;i--)  
#define LL long long  
using namespace std;  
  
long long n,k;  
int cnt[500005];  
  
void f(int x,int y)  
{  
    if(x==y+1)return;  
    printf("(");  
    f(x+1,y);  
    printf(")");  
    while(cnt[x]--)printf("()");  
}  
int main()  
{  
    long long base=0;  
    cin>>n>>k;  
    rep(i,0,n-1){  
        base+=i;  
        if(base<=k&&k<=base+(n-i-1)*i){  
            k-=base;  
            n-=i+1;  
            dep(x,i,0)  
                while(n&&k-x>=0){  
                    cnt[x]++;  
                    k-=x;  
                    n--;  
                }     
        f(0,i);  
        return 0;  
        }  
    }  
    printf("Impossible\n");  
    return 0;  
}  
