#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;
const int month[]={31,28,31,30,31,30,31,31,30,31,30,31,
					31,28,31,30,31,30,31,31,30,31,30,31,
					31,29,31,30,31,30,31,31,30,31,30,31,
					31,28,31,30,31,30,31,31,30,31,30,31,
					31,28,31,30,31,30,31,31,30,31,30,31};

bool work(int *num,int n){
		int i=0,temp=0;
		for(int j=0;month[j];j++){
			if(month[j]==num[i]){
				i++;
				if(i==n)return true;
			}
			else{
				i=0;
				j=temp-1;
				temp++;
			}
		}
	return false;
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n;
	cin >> n;
	int temp[30]={0};
	for(int i=0;i<n;i++){
		cin >> temp[i];
	}
	bool flag = false;
	flag = work(temp,n);
	if(flag)cout << "YES" << endl;
	else cout << "NO" << endl; 
	return 0;
}
