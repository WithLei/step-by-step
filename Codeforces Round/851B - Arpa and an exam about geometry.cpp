#include<cstdio>
#include<cstdlib>
#include<cstring> 
#include<string>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;
bool work(double ax,double ay,double bx,double by,double cx,double cy){
	if((ay-by)/(ax-bx)==(ay-cy)/(ax-cx))return true;
	else return false;
}
int main(){
	double ax,ay,bx,by,cx,cy,ab,bc;
	cin >> ax >> ay >> bx >> by >> cx >> cy ;
	bool flag = true;
	ab = sqrt(pow(ax-bx,2)+pow(ay-by,2));
	bc = sqrt(pow(cx-bx,2)+pow(cy-by,2));
	if(ab!=bc)cout << "No" << endl;
	else if(work(ax,ay,bx,by,cx,cy))cout << "No" << endl;
	else cout << "Yes" << endl;
}