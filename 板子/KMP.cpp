/* 
pku3461(Oulipo), hdu1711(Number Sequence) 
���ģ�� �ַ����Ǵ�0��ʼ�� 
Next�����Ǵ�1��ʼ�� 
 
 
*/  
#include <iostream>  
#include <cstring>  
using namespace std;  
  
const int N = 1000002;  
int next[N];  
char S[N], T[N];  
int slen, tlen;  
  
void getNext()  
{  
    int j, k;  
    j = 0; k = -1; next[0] = -1;  
    while(j < tlen)  
        if(k == -1 || T[j] == T[k])  
            next[++j] = ++k;  
        else  
            k = next[k];  
  
}  
/* 
����ģʽ��T������S���״γ��ֵ�λ�� 
���ص�λ���Ǵ�0��ʼ�ġ� 
*/  
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
            j = next[j];  
    }  
    if(j == tlen)  
        return i - tlen;  
    else  
        return -1;  
}  
/* 
����ģʽ��������S�г��ֵĴ��� 
*/  
int KMP_Count()  
{  
    int ans = 0;  
    int i, j = 0;  
  
    if(slen == 1 && tlen == 1)  
    {  
        if(S[0] == T[0])  
            return 1;  
        else  
            return 0;  
    }  
    getNext();  
    for(i = 0; i < slen; i++)  
    {  
        while(j > 0 && S[i] != T[j])  
            j = next[j];  
        if(S[i] == T[j])  
            j++;  
        if(j == tlen)  
        {  
            ans++;  
            j = next[j];  
        }  
    }  
    return ans;  
}  
int main()  
{  
      
    int TT;  
    int i, cc;  
    cin>>TT;  
    while(TT--)  
    {  
        cin>>S>>T;  
        slen = strlen(S);  
        tlen = strlen(T);  
        cout<<"ģʽ��T������S���״γ��ֵ�λ����: "<<KMP_Index()<<endl;  
        cout<<"ģʽ��T������S�г��ֵĴ���Ϊ: "<<KMP_Count()<<endl;  
    }  
    return 0;  
}  
