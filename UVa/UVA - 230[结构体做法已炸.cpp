#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<sstream> 
#include<set> 
using namespace std;
struct node{
	string title,author;
	bool borrow;
	node(bool flag=false){
		borrow = flag;
	}
}books[2000],shel[2000];
bool cmp(node x,node y){
	if(x.author!=y.author)return x.author<y.author;
	else return x.title<y.title; 
}
int main(){
	int num=0;
	string all,title,by,author;
	while(getline(cin,all)&&all!="END"){
		books[num].title = all.substr(0, all.find_last_of("\"")+1);
		books[num].author = all.substr(all.find_last_of("\"")+1);
		num++;
	}
	sort(books,books+num,cmp);
	memcpy(shel,books,sizeof(books));
	string oprte;
	int snum = 0;
	while(cin >> oprte && oprte != "END"){
		if(oprte == "BORROW"){
			getchar();
			getline(cin,title);
			for(int i=0;i<num;i++){
				if(books[i].title == title)books[i].borrow=true;
			}
		}
		else if(oprte == "RETURN"){
			getchar();
			getline(cin,title);
			for(int i=0;i<num;i++){
				if(title == books[i].title){
					shel[snum] = books[i];
					snum++;
				}
			}
		}
		else if(oprte == "SHELVE"){
			sort(shel,shel+snum,cmp);
			for(int it=0;it<snum;it++){
				for(int i=0;i<num;i++){
					if(shel[it].title==books[i].title&&books[i].borrow){
						int ii=i-1;
						while(books[ii].borrow&&ii!=0)ii--;
						cout << "Put " << shel[it].title << " after " << books[ii].title << endl;
						break;
					}
				} 
			}
			memset(shel,0,sizeof(shel));
			snum = 0;
		}
	}
	cout << "END" << endl;
}