#include <stdio.h>

int main() {
    int n, u, d;
    int h = 0;
    int t = 0;

    scanf("%d%d%d", &n, &u, &d);

    for (;;) {
        ++t; h += u;
        if (h >= n) 
            return !printf("%d\n", t);
        
        ++t; h -= d;
    }
    return 0;
}