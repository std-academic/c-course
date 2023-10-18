#include <stdio.h>

int main() {
    int x;

    int s = 0;

    for(;;) {
        scanf("%d",&x);

        if (x <= 0) break;
        if (x & 1) s += x;
    }
    
    printf("%d\n", s);
    return 0;
}
