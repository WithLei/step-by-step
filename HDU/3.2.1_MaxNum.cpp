#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000+6;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int cases;
	cin >> cases;
	for(int i=1;i<=cases;i++){
		int n,num[maxn]={0};
		cin >> n;
		for(int t=0;t<n;t++){
			cin >> num[t];
		}
		int now = 0,next = 0,result=num[0],maxresult = num[0],maxnow=0,maxnext=0;
		
		for(now=0,next=0;next < n;next++){
			if(result<0&&num[next]<0){
				now=next+1;
				result=0;
				continue;
			}
			if(next!=0)
				result+=num[next];
			if(maxresult<result){
				maxresult = result;
				maxnow = now;
				maxnext = next;
			}
			if(result<0){
				now=next+1;
				result=0;
			}
		}
		
		if(maxresult<0)
			for(int i=0;num[i];++i)
				if(num[i]>=maxresult){
					maxnow=i;
					maxnext=i;
					maxresult=num[i];
				}
		
		cout << "Case " << i << ":" << endl;
		cout << maxresult << " " << maxnow+1 << " " << maxnext+1 << endl;
		if(i!=cases)
			cout << endl; 
	}
}
