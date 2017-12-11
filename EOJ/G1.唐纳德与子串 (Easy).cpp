#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

const int N = 10002;  
int nextt[N];  
char S[N], T[N];  
int slen, tlen;  
  
void getNext()  
{  
    int j, k;  
    j = 0; k = -1;
	nextt[0] = -1;  
    while(j < tlen)  
        if(k == -1 || T[j] == T[k])  
            nextt[++j] = ++k;  
        else  
            k = nextt[k];  
  
}  

int KMP_Index()  
{  
    int i = 0, j = 0;  
    getNext();  
  
    while(i < slen && j < tlen)  
    {  
        if(j == -1 || S[i] == T[j])  
        {  
            i++; j++;  
        }  
        else  
            j = nextt[j];  
    }  
    if(j == tlen)  
        return i - tlen;  
    else  
        return -1;  
}  

int KMP_Count(int l,int r)  
{  
    int ans = 0;  
    int i, j = 0;  
    if(slen == 1 && tlen == 1)  
    {  
        if(S[l] == T[l])  
            return 1;  
        else  
            return 0;  
    }  
    getNext();  
    for(i = l; i <= r; i++)  
    {  
        while(j > 0 && S[i] != T[j])  
            j = nextt[j];  
        if(S[i] == T[j])  
            j++;  
        if(j == tlen)  
        {  
            ans++;  
            j = nextt[j];  
        }  
    }  
    return ans;  
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,l,r;
	cin >> S;
	cin >> n;
	while(n--){
		cin >> l >> r >> T;
		slen = strlen(S);  
        tlen = strlen(T); 
		cout << KMP_Count(l,r) << endl;
	}
	return 0;
}
