#include<stdio.h>
int main(){
int a,b,c,d,i,n;
char ch;
scanf("%d",&n);
getchar();
for(i=1;i<=n;i++){
ch=getchar();
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z')) a++;
else if(ch>='0'&&ch<='9') b++;
else if(ch==' ' || ch=='\n') c++;
else d++;
                        }
printf("letter = %d, blank = %d, digit = %d, other = %d",a,c,b,d);
                        return 0;}