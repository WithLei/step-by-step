#include<bits/stdc++.h>
using namespace std;
const int n[]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char db[]={'1','0','X','9','8','7','6','5','4','3','2'};

int atoint(string num){
    int r=0,ten=1;
    for(int i=num.length()-1;i>=0;--i,ten*=10){
        r+=ten*(num[i]-'0');
    }
    return r;
}

bool judgeid(string num){
    int r=0;
    for(int i=0;i<17;i++){
        r+=(num[i]-'0')*n[i];
        if(num[i]>'9'||num[i]<'0')return false;
     }
     r%=11;
     if(num[17]==db[r])return true;
     else return false;
  }

bool judge(string today,string num){
      if(num.length()!=18)return false;
      for(int i=0;i<today.length();++i)
        if(today[i]=='-')today[i]=' ';
      stringstream ss(today);
      string buf;
      int now[5],i=0;
      while(ss>>buf){
           now[i]=atoint(buf);
           ++i;
      }
      int birthyear=(num[6]-'0')*1000+(num[7]-'0')*100+(num[8]-'0')*10+(num[9]-'0');
      if(now[0]-birthyear<18)return false;
      else if(now[0]-birthyear>18)return true;
        else if(now[0]-birthyear==18){
            int birthmonth=(num[10]-'0')*10+(num[11]-'0');
            if(now[1]-birthmonth<0)return false;
            else if(now[1]-birthmonth>0)return true;
            else if(now[1]-birthmonth==0){
                int birthday=(num[12]-'0')*10+(num[13]-'0');
                if(now[2]-birthday<0)return false;
                else return true;
            }
        }
   }

int main(){
    int man;
    string today;
    while(cin >> man){
    cin >>  today;
    int result[200]={0};
    for(int i=0;i<man;++i){
    	string num;
    	cin >> num;
    	if(judgeid(num)&&judge(today,num))result[i]=1;
    	else  result[i]=0;
    }
    for(int i=0;i<man;i++){
    	if(result[i])cout << "Accepted" << endl;
    	else  cout << "Sorry" << endl;
	}
	} 
 }
