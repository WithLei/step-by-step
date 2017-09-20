#include<bits/stdc++.h>  
#define rep(i,a,b) for(int i=a;i<=b;i++)  
#define dep(i,a,b) for(int i=a;i>=b;i--)  
using namespace std;  
   
int n,l[505],r[505],cnt=0;  
   
inline bool checkl(int x,int y)  
{  
       if(l[x]==0)return 1;  
       else if(l[x]==y)return 0;  
       return checkl(l[x],y);  
}  
        
inline bool checkr(int x,int y)  
{  
       if(r[x]==0)return 1;  
       else if(r[x]==y)return 0;  
       return checkr(r[x],y);  
}  
   
int main()  
{  
   scanf("%d",&n);  
       rep(i,1,n){scanf("%d%d",&l[i],&r[i]);if(l[i]==0)cnt++;}  
       rep(i,1,n){  
       //     cout<<cnt<<endl;  
              if(l[i]==0&&cnt>1)  
                  rep(j,1,n)if(r[j]==0&&i!=j&&checkr(i,j)){r[j]=i;l[i]=j;cnt--;break;}  
              if(r[i]==0&&cnt>1)  
                 rep(j,1,n)if(l[j]==0&&i!=j&&checkl(i,j)&&checkr(i,j)){l[j]=i;r[i]=j;cnt--;break;}  
              }  
       rep(i,1,n)printf("%d%d\n",l[i],r[i]);  
       return 0;  
}  
