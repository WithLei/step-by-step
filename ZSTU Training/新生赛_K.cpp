#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int PI = acos(-1.0);
 
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin >> x1){
        cin >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;
        if(x2<=x3||y4>=y1||x4<=x1||y3<=y2)
            cout << "0" << endl;
        else{
            int xs = max(x1,x3);
            int ys = min(y1,y3);
            int xe = min(x2,x4);
            int ye = max(y2,y4);
            cout << abs((xs-xe)*(ys-ye)) << endl;
        }
    }
    return 0;
}
