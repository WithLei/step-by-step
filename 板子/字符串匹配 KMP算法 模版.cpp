

///KMP   字符串匹配 模版

///返回第一次匹配位置


#include<cstdio>
#include<cstring>
using namespace std;
void getnext(char b[],int next[])                          ///计算出next数组（next数组是关于子串的）
{
    int i,j;
    next[0]=-1;                                         ///让第一个字符的next值为-1，即第一个字符不匹配时，出现了失配，用-1标记
    next[1]=0;                                          ///第二个字符的next值为0，当第二个字符不匹配时，只能将子串从0位开始重新与母串比较
    i=1;                                   ///i在后，j在前，以i为后缀光标，j为前缀光标
    j=0;
    while(i<strlen(b))
    {
        if(j==-1||b[i]==b[j])           ///当j=-1时，说明前面没有与该字符相同的字符，所以next值应为j+1=0,i光标向后继续计算下一位的next值，而j光标回溯到0位（即开头）
        {                               ///当b[i]=b[j]时，说明该处字符与前面的字符有重复，所以后一项的next值可以在后缀next值上+1；
            next[i+1]=j+1;
            i++;
            j++;
        }
        else
        {
            j=next[j];                ///当既不完全失配，又不匹配时，j光标前移，将前缀分成小部分，（退而求其次，看是否能找到最大公共部分）
        }
    }
}
int kmp(char a[],char b[],int next[])               ///匹配过程
{
    int i,j,l;
    i=0;
    j=0;
    l=strlen(b);
    while(j<l&&i<strlen(a))                     ///当完全匹配时 或 完全不匹配时 结束
    {
        if(j==-1)                               ///当j=-1时，即完全失配，只能将子串从头开始比较，i光标移向母串下一位，j光标回溯到子串开头
        {
            i++;
            j++;
        }
        else if(a[i]==b[j])                    ///如果母串子串该处字符相同，则母串光标和子串光标都移向下一位
        {
            i++;
            j++;
        }
        else
        {
            j=next[j];                        ///当子串部分失配时，子串进行移动，根据失配处子串字符的next值来确定子串该移到什么位置
        }
    }
    if(j==l)                            ///判断是完全匹配，则返回完全匹配时子串的开头位于母串何处
    {
        return i-l+1;
    }
    else                               ///判断是完全失配，则返回-1，表示完全失配
    {
        return -1;
    }
}
int main()
{
    char a[100000],b[100000];                     ///母串为a，子串为b     大小都为10万
    int next[100000];
    while(scanf("%s %s",a,b)!=EOF)
    {
        getnext(b,next);                          ///执行一下getnext函数，从而得到子串的next数组
        int c;
        c=kmp(a,b,next);
        printf("%d\n",c);
        memset(a,'\0',sizeof(a));
        memset(b,'\0',sizeof(b));                  ///清零，为下一次样列做准备
        memset(next,0,sizeof(next));
    }
    return 0;
}