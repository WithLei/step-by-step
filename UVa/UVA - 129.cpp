#include<cstdio>  
#include<cstring>  
const int MAXN=100;  
char a[MAXN];  
int n,L,cnt;  
bool dfs(int cur){  
    if(cnt++ == n){  
        for(int i=0;i<cur;i++){  
            if(i%64==0 && i) printf("\n");          //若16组后要先换行  
            else if(i%4==0 && i) printf(" ");       //每4个用空格隔开  
            printf("%c",a[i]+'A');  
        }  
        printf("\n");  
        printf("%d\n",cur);  
        return false;  
    }  
    for(int i=0;i<L;i++){  
        a[cur]=i;  
        int ok=1;  
        for(int j=1;j*2<=cur+1;j++){  
            int equal=1;  
            for(int k=0;k<j;k++)                                //判断是否连续相同的字符串  
                if(a[cur-k]!=a[cur-k-j]) {equal=0;break;}  
            if(equal) {ok=0;break;}  
        }  
        if(ok) if(!dfs(cur+1)) return false;  
    }  
    return true;  
}  
int main(){  
    //freopen("in.txt","r",stdin);  
    while(~scanf("%d%d",&n,&L)){  
        if(n==0 && L==0) break;  
        memset(a,0,sizeof(a));  
        cnt=0;  
        dfs(0);  
    }  
    return 0;  
} 
/*
26 3
ABACABCACBABCABACABCACBA
24
27 3
ABACABCACBABCABACABCACBAB
25
28 3
ABACABCACBABCABACABCACBABC
26
29 3
ABACABCACBABCABACABCACBABCA
27
30 3
ABACABCACBABCABACABCACBABCAB
28
*/