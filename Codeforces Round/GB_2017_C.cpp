#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e4+4;
double y[maxn];

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,r;
	cin >> n >> r;
	int x[maxn];
	for(int i=0;i<n;i++)
		cin >> x[i];
	y[0]=r;
	for(int i=1;i<n;i++){
		double rs = r;
		for(int j=i-1;j>=0;j--){
			if(abs(x[i]-x[j])>2*r)continue;
			rs=y[j]*1.0+(double)sqrt(4*r*r-(x[i]-x[j])*(x[i]-x[j]));
			break;
		}
		y[i]=rs;
//	cout <<"111" << endl;
	}
	printf("%.10lf",y[0]);
	for(int i=1;i<n;i++){
		printf(" %.10lf",y[i]);
	}
	cout << endl;
	return 0;
}
