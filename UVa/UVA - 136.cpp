#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
#include<queue> 
using namespace std;
const int maxn = 1500;
int n[]={2,3,5};
typedef long long LL;
int main(){
	set<LL>s;
	priority_queue<LL,vector<LL>,greater<LL> >pq;
	s.insert(1);
	pq.push(1);
	for(int i=1;;i++){
		LL num = pq.top();pq.pop();
		if(i==1500){
			cout << "The 1500'th ugly number is " << num << "." << endl;
			break;
		}
		for(int t=0;t<3;t++){
			LL x = num*n[t];
			if(!s.count(x)){
				s.insert(x);
				pq.push(x);
			}
		}
	}
} 