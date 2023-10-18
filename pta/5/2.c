#include <stdio.h>

int main() {
    int n, d=0, s=0;
    scanf("%d", &n);
    if (!n) {
        puts("1 0");
    } else {
        while(n) {
            ++d;
            s+=n%10;
            n/=10;
        }
        
        printf("%d %d\n", d,s);
    }
    return 0;
}