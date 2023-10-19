#include <stdio.h>
#include <ctype.h>

const double f[]={0,3,2.5,4.1,10.2};

int main() {
    puts("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit");

    int q=5, d;
    while(q--) {
        scanf("%d", &d);
        if(d==0)break;
        if(d>0 && d<=4) {
            printf("price = %.2f\n", f[d]);
        }else puts("price = 0.00");
    }
    return 0;
}
