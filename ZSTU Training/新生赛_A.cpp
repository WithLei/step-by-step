#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define PI acos(-1.0)
typedef pair<int,int>point;
map<int,point>r;
 
 
LL result[19000]={0};
int main(){
    int c;
    for(int i=1;i<=18258;i++){
        result[i]=pow(i,3)-pow(i-1,3);
    }
    for(int i=18258;i>0;i--){
        LL sum=0;
        for(int j=i;j>0;j--){
            sum += result[j];
            if(sum>=1e9)break;
            if(r[sum].first==0||r[sum].first>j){
	            point temp(j-1,i);
	            r[sum]=temp;
            }
        }
    }
//  cout << "here" << endl;
    while(cin >> c){
        if(r[c].first&&r[c].second)
            cout << r[c].first << " " << r[c].second << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
