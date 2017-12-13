#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int PI = acos(-1.0);
 
int main(){
    int a,b,c;
    while(cin >> a){
        cin >> b >> c;
        double tri =sqrt(3)/4*a*a;
        double y = PI*b*b;
        double z = c*c;
        double result = max(tri,max(y,z));
        if(result==tri)
            cout << "triangle" << endl;
        else if(result==y)
            cout << "circle" << endl;
        else cout << "square" << endl;
    }
    return 0;
}
