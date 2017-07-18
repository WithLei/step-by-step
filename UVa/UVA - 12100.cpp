#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;
struct node{
	int num,pos;
	node(int x=0,int y=0){
		num=x;
		pos=y;
	}
};
int main(){
	int cases;
	cin >> cases;
	while(cases--){
		queue<node>paper;//优先级 和 位置 
		priority_queue<int>pq;
		int n,m;
		cin >> n >> m;
		int num;
		for(int i=0;i<n;i++){
			cin >> num;
			paper.push(node(num,i));
			pq.push(num);
		} 
		int time=0;
		while(1){
			if(paper.front().num==pq.top()){
				time++;
				if(paper.front().pos==m){
//					cout << "num==" << paper.front().num << endl;
					cout << time << endl;
					break;
				}
				else {
//					cout << "out:" << pq.top() << endl;
					paper.pop();
					pq.pop();
				}
			}
			else{
				node extra = paper.front();
				paper.pop();
				paper.push(extra);
			}
		}
	}
}