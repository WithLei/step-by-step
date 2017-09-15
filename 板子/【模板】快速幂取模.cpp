 long long quickmod(long long a,long long b,long long m)  
{  
    long long ans = 1;  
    while(b)//用一个循环从右到左便利b的所有二进制位  
    {  
        if(b&1)//判断此时b[i]的二进制位是否为1  
        {  
            ans = (ans*a)%m;//乘到结果上，这里a是a^(2^i)%m  
            b--;//把该为变0  
        }  
        b/=2;  
        a = a*a%m;  
    }  
    return ans;  
} 