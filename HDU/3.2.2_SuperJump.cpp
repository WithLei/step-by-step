#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+7;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
    int n;
    while(cin >> n && n){
    	int result[maxn]={0},num[maxn]={0};
    	for(int i=0;i<n;i++){
    		cin >> result[i];
    		num[i]=result[i];
		}
    	
    	for(int i=0;i<n;i++){
    		for(int cmp=i;cmp<n;cmp++){
    			if(num[i]<num[cmp]){
    				result[cmp]=max(result[cmp],result[i]+num[cmp]);
				}
			}
		}
		
		int r = result[0];
		for(int i=1;i<n;i++){
			r = max(r,result[i]);
		}
		cout << r << endl;
	}
    
    return 0;
}
