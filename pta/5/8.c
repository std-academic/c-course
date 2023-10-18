#include <stdio.h>

int main() {
    int x; scanf("%d", &x);

    int i, j, k, c=0;

    for (i = x/5; i>=1;--i)
        for (j=(x-i*5)/2; j>=1; --j) {
            k = x-i*5-j*2;
            if (!k) continue;

            printf(
                "fen5:%d, fen2:%d, fen1:%d, total:%d\n",
                i, j, k, i+j+k
            );
            ++c;
        }
    
    printf("count = %d\n", c);
    return 0;
}