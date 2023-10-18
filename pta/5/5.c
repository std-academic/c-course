#include <stdio.h>

double x;
double item(int k) {
    double res=1;
    int i;
    for (i=1;i<=k;++i)
        res *= x / i;
    return res;
}

int main() {
    int n = 0;
    scanf("%lf", &x);

    double ans=0, ret=01145;
    while(ret>0.00001||ret<-0.00001){
        ret=item(n);
        ans+=ret;
        ++n;
    }
    printf("%.4f\n", ans);
    return 0;
}