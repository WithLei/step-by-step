 long long quickmod(long long a,long long b,long long m)  
{  
    long long ans = 1;  
    while(b)//��һ��ѭ�����ҵ������b�����ж�����λ  
    {  
        if(b&1)//�жϴ�ʱb[i]�Ķ�����λ�Ƿ�Ϊ1  
        {  
            ans = (ans*a)%m;//�˵�����ϣ�����a��a^(2^i)%m  
            b--;//�Ѹ�Ϊ��0  
        }  
        b/=2;  
        a = a*a%m;  
    }  
    return ans;  
} 