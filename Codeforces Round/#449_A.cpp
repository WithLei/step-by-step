#include<bits/stdc++.h>
using namespace std;
int main(){
	int stringlength,change;
	cin >> stringlength >> change;
	string str;
	cin >> str;
	for(int i=0;i<change;i++){
		int l,r;
		char before,after;
		cin >> l >> r >> before >> after;
		for(int i=l-1;i<r;i++)
			if(str[i]==before)
				str[i]=after;
	}
	cout << str << endl;
}
