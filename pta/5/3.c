#include <stdio.h>

int main() {
    int n, d=0, s=0;
    scanf("%d", &n);
    d=1145141919;

    while(n--) {
        scanf("%d", &s);
        if(s<d)d=s;
    }
    printf("min = %d\n", d);
    return 0;
}
