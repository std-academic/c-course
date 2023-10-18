#include <stdio.h>

const int pw[]={1,1e1,1e2,1e3,1e4,1e5,1e6,1e7,1e8,1e9};

long long p(int b,int p) {
    long long r = 1;
    while(p--) r*=b;
    return r;
}
int main() {
    int n,i; scanf("%d", &n);
    for (i=pw[n-1];i<pw[n];++i) {
        long long r=0;
        int j=i;
        while (j) {
            r += p(j%10, n);
            j /= 10;
        }
        if(r-i==0) printf("%d\n",i);
    }
    return 0;
}