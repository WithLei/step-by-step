#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 1e4+7;
const LL maxnum = 1e9;
const int x = 18258;
typedef pair<LL,LL>ab;
LL num[2*maxn]={0};

int main(){
	for(int i=2;i<=x;i++)
		num[i-1]=pow(i,3)-pow(i-1,3);
	int c;
	while(cin >> c){
		deque<LL>q;
		bool flag = false;
		LL sum = 0;
		for(int i=1;i<=x;i++){
			q.push_back(i);
			sum+=num[i];
			while(!q.empty()&&sum>c){
				sum-=num[q.front()];
				q.pop_front();
			}
			if(sum==c){
				cout << q.front() << " " << q.back()+1 << endl;
				flag = true;
				break;
			}
		}
		if(!flag)
			cout << "-1" << endl;
	}
	
} 
