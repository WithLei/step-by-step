#include<iostream>  
#include<algorithm>  
#include<cstdio>  
#include<vector>  
#include<set>  
#include<map>  
using namespace std;  
struct key_value{  
    string key,value;  
};  
set<string>key;  
vector<string>change[3];  
map<string,string>dict[2];  
int main(){  
    int t,flag=1;  
    key_value x,y;  
    cin>>t;  
    getchar();  
    while(t--){  
        dict[0].clear();  
        dict[1].clear();  
        for(int i=0;i<3;i++) change[i].clear();  
        change[0].push_back("+");  
        change[1].push_back("-");  
        change[2].push_back("*");  
        key.clear();  
        char c;  
        for(int i=0;i<2;){  
            c=getchar();  
            if(c=='{'){  
                flag=1;  
                x=y;  
                continue;  
            }  
            if(c=='}'){  
                if(x.key!=""&&x.value!=""){  
                    dict[i][x.key]=x.value;  
                    key.insert(x.key);  
                }  
                i++;  
                getchar();  
                continue;  
            }  
            if(c==','||c==':'){  
                flag=!flag;  
                if(c==','){  
                    dict[i][x.key]=x.value;  
                    key.insert(x.key);  
                    x=y;  
                }  
                continue;  
            }  
            if(flag) x.key+=c;  
            else x.value+=c;  
        }  
        for(set<string>::iterator it=key.begin();it!=key.end();it++){  
            if(!dict[0].count(*it)) change[0].push_back(*it);  
            else if(!dict[1].count(*it)) change[1].push_back(*it);  
            else if(dict[0][*it]!=dict[1][*it]) change[2].push_back(*it);  
        }  
        int k=0;  
        for(int i=0;i<3;i++){  
            int first=2;  
            if(change[i].size()-1){  
                for(int j=0;j<change[i].size();j++){  
                    if(first) first--;  
                    else cout<<",";  
                    cout<<change[i][j];  
                }  
                cout<<endl;  
                k++;  
            }  
        }  
        if(!k) cout<<"No changes"<<endl;  
        cout<<endl;  
    }  
    return 0;  
}  