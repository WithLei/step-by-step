#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;
const LL modn = 1e9+7;
 
int main(){
    std::ios::sync_with_stdio(false); 
    cin.tie(0);cout.tie(0); 
    int n;
    while(cin >> n){
    LL result = 1;
    for(int i=0;i<n;i++){
        LL a,b;
        cin >> a >> b;
        LL temp = (a+b);
        result*=temp;
        result%=modn;
    }
    if(n)
        cout << (result)%modn <<endl;
    else
        cout << "0" << endl;
    }
    return 0;
}
