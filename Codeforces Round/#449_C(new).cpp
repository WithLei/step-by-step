#include<bits/stdc++.h>
using namespace std;  
typedef long long ll;  
const ll maxx=1e18;  
ll po;  
char s1[100000]=" What are you doing at the end of the world? Are you busy? Will you save us?";  
char s2[100000]=" What are you doing while sending \"\"? Are you busy? Will you send \"\"?";  
ll f[111000];  
char gg(ll x,ll y)  
{  
    if (x==0)  
    return s1[y];  
    if (y<=34)  
    return s2[y];  
    if (y<=34+f[x-1]||x>po)  
    return gg(x-1,y-34);  
    if (y<=34+f[x-1]+32)  
    return s2[y-f[x-1]];  
    if (y<=34+2*f[x-1]+32)  
    return gg(x-1,y-34-f[x-1]-32);  
    return s2[y-f[x-1]-f[x-1]];  
}  
int main()  
{  
    std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
    ll q,x,y,i;  
    f[0]=75;  
    for (i=1;i<=100;i++)  
    {  
    f[i]=2*f[i-1]+68;  
    if (f[i]>maxx)  
    break;  
    }     
    po=i;  
    cin>>q;  
    for (i=1;i<=q;i++)  
    {  
        cin>>x>>y;  
        if(y>f[x]&&x<=po)  
        {  
            cout<<".";  
            continue;  
        }  
        cout<<gg(x,y);  
    }  
    return 0;  
}  
