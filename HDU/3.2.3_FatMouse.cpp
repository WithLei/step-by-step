#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e3+4;
struct node{
	int s,w,ans;
}mice[maxn];

bool cmp(node x,node y){
	if(x.w!=y.w)return x.w<y.w;
	else if(x.s!=y.s)return x.s>y.s;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
    int w,s,n=0;
    while(cin >> w){
    	cin >> s;
    	mice[n].s=s;
    	mice[n].ans=n+1;
    	mice[n++].w=w;
	}
    sort(mice,mice+n,cmp);
    int result[maxn]={0},last[maxn],maxnum=1;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(mice[i].w<mice[j].w&&mice[i].s>mice[j].s){
    			if(result[j]<result[i]+1){
    				result[j]=result[i]+1;
    				last[j]=i;
				}
			}
			if(result[j]>result[maxnum])
				maxnum = j;
		}
	}
	stack<int>range;
	while(last[maxnum]){
		range.push(maxnum);
		maxnum = last[maxnum];
	}
	cout <<  range.size()+1 << endl;
	cout << mice[maxnum].ans << endl;
	while(!range.empty()){
		cout << mice[range.top()].ans << endl;
		range.pop();
	}
    return 0;
}
