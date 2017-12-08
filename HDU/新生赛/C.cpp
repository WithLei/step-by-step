#include<bits/stdc++.h>
using namespace std;
int main(){
 long long  n,m,t1,t2,t3,t4;
 while(cin >> n){
 	cin >> m >> t1 >> t2 >> t3 >> t4;
    long long result1=(n-1)*t4;
    long long  result2=t2*2+t3+t1*(abs(n-m)+n-1);
    cout << min(result1,result2) << endl;
}
 }
