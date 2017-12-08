#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
    if(n<m){
        int temp=n;
        n=m;
        m=temp;
    }
    int r;
    while(m){
        r=n%m;
        n=m;
        m=r;
    }
    return n;
}

long long pow(long long a,long long n){
    if(n==0)return 1;
    n--;
    long long result=1;
    int aa=a;
    while(n--){
        a*=aa;
    }
    return a;
}

int main(){
    long long  n,m,k;
    while(cin >> m ){
    	cin >> n >> k;
        long long d = gcd(m,m+n*pow(2,k));
        cout << m/d << "/" << (m+n*pow(2,k))/d << endl;
    }
}
