#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e6+4;
struct Node{
	char c;
	int pos,newpos;
}alpha[maxn];

bool cmp1(Node x,Node y){
	if(x.c!=y.c)return x.c < y.c;
	else return x.pos < y.pos;
}

bool cmp2(Node x,Node y){
	if(x.newpos!=y.newpos)return x.newpos < y.newpos;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	char str[maxn];
	while(cin >> str){
//		memset(alpha,0,sizeof(alpha));
		int len = strlen(str);
		int cnt[30]={0},longestnum=0; 
		for(int i=0;i<len;++i){
			alpha[i].c=str[i];
			alpha[i].pos=i;
			cnt[str[i]-'a']++;
			longestnum=max(cnt[str[i]-'a'],longestnum);
		}
		sort(alpha,alpha+len,cmp1);
//		//查最长子链 
//		int mostlength=1,l=1;
//		char tempmostc = alpha[0].c,tempc = alpha[0].c;
//		for(int i=1;i<len;++i){
//			if(tempc==alpha[i].c){
//				l++;
//				if(l>mostlength){
//					mostlength = l;
//					tempmostc = tempc;
//				}
//			}
//			else{
//				tempc=alpha[i].c;
//				l=1;
//			}
//		}
		if(longestnum>len/2)
		{
			cout << "impossible" << endl;
			continue;
		 } 
		//移动longestnum
		for(int i=0;i<len;++i){
			alpha[i].newpos=alpha[(i+longestnum)%len].pos;
		}
		sort(alpha,alpha+len,cmp2);
		for(int i=0;i<len;++i)
			cout << alpha[i].c;
		cout << endl;
		memset(str,0,sizeof(str));
	}
	return 0;
}
