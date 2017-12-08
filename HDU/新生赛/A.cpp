#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m,e,z,p;
    for(int i=0;i<n;i++){
        cin >> m >> e >> z >> p;
        if(m>=85&&p>=85&&e>=55&&z>=55){
            if(m+e+z+p>=370){
                cout <<"A" <<endl;
            }
            else if(m+e+z+p>=305) cout <<"B" <<endl;
            else cout << "C"<< endl;
        }else cout << "C"<< endl;
    }
 }
