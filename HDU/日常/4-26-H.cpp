#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int next[N];  
long long a[N]={0},b[N]={0};
int n,m,p;
  
void getNext()  
{  
    int j, k;  
    j = 0; k = -1; next[0] = -1;  
    while(j < m)  
        if(k == -1 || b[j] == b[k])  
            next[++j] = ++k;  
        else  
            k = next[k];  
  
}  

int KMP_Index()  
{  
    int i = 0, j = 0;  
    int result = 0;
    getNext();  
  
    while(i < n && j < m)  
    {  
        if(j == -1 || a[i] == b[j])  
        {  
            i+=p; j++; result++;  
        }  
        else  
            j = next[j];  
    }  
    if(j == m)  
        return result;  
    else  
        return -1;  
}  

int kmp()  
{  
    int res=0;  
    getNext();  
    for(int k=0;k<p;++k){//进行p次匹配   
        int i=k,j=0;  
        while(i<n)  
        {  
            if(j==-1||a[i]==b[j])  
            {  
                i+=p;//在母串上每隔p个位置匹配一次   
                j++;  
                if(j==m)  
                    res++;  
            }  
            else  
                j=next[j];  
        }  
    }  
    return res;  
}  

int main(){
	int cases;
	cin >> cases;
	for(int i=1;i<=cases;i++){
		memset(next,0,sizeof(next[0]));
		memset(a,0,sizeof(a[0]));
		memset(b,0,sizeof(b[0]));
		cin >> n >> m >> p;
		for(int t=0;t<n;t++)
			cin >> a[t];
		for(int t=0;t<m;t++)
			cin >> b[t];
		cout << KMP_Index()<< endl;
	}
}
