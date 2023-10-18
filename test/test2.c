#include <stdio.h>
#include <string.h>

int s(char a,char b)
{
    if(a==b||a==b+32||a+32==b)
        return 1;
    else
        return -1;
}//  使用累和来判断是否全部正确
int main()
{
    char a[11],b[10000];//a[]表示单词   b[]表示输入的句子；
    int c[10000]={0},d[10000]={0};
    int i,j=1,k,g=0,m,n,l=0,num1=0,num2,t;//l具有定位功能，即卡出b[]的下标；num1是出现总次数   num2是第一次出现位置
    gets(a);
    gets(b);
    puts("*");
    for (i=0;i<strlen(a);i++) printf("%c",a[i]);puts("");
    for (i=0;i<strlen(b);i++) printf("%c",b[i]);puts("");
    for(i=1;b[i-1]!='\0';i++)
    {
       if(b[i-1]==' ')
       {
           j++;
           continue;
       }

       else c[j-1]++;
    }//用来统计每个单词的长度，将长度存入c数组；

    for(k=1;k<=10;k++)
    {
        if(a[k-1]=='\0')  break;
        else g++;
    }//找出单词长度；

    for(m=1;m<=j;m++)//对单词进行逐个检测，m是第几个单词
    {
        int r=0;
        if(c[m-1]!=g)
        {
            l=l+c[m-1]+1;
            continue;
        }
        else
        {
            for(n=1;n<=s;n++)
            {
                r=r+s(a[n-1],b[l]);
            }
            if(r==g)
                 {
                     num1++;
                     d[m-1]=1;//用来查找最小的m-1；
                 }
                else
                 break;

            l=l+g+1;
       }
    }

    for(t=1;;t++)
    {
        if(d[t-1]==1)
        {
            num2=t-1;
            break;
        }
    }


    if(num1==0) printf("-1");
    else printf("%d %d",num1,num2);
  return 0;
}