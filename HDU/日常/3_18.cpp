#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+7;
int a[maxn];
typedef struct{
	int id,w,answer;
}node[maxn],n;

bool cmp1(n a,n b){
	if(a.w!=b.w)return a.w < b.w;
}

bool cmp2(n a,n b){
	if(a.id!=b.id)return a.id < b.id;
}

int main(){
	int n,m,temp;
	cin >> n ;
	for(int i=0;i<n;i++){
		cin >> temp;
		if(i>0)
			a[i]=a[i-1]+temp;
		else 
			a[i]=temp;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> node[i].w;
		node[i].id=i;
	}
	sort(b,b+m,cmp1);
	int j = 0;
	for(int i=0;i<m;i++){
		if(node[i].w<=a[j])
		{
			node[i].answer=j+1;;
		}
		else{
			j++;
			i--;
		}
	}
	sort(b,b+m,cmp2);
	for(int i=0;i<m;i++){
		cout << node[i].answer << endl;
	}
	
	return 0;
}
