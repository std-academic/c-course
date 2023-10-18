#include<stdio.h>

int gcd(int x,int y) {
    if(y==0)return x;
    return gcd(y,x%y);
}

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int g=gcd(n,m);
    printf("%d %d\n",g,n/g*m);
    return 0;
}