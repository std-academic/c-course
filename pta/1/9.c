#include <stdio.h>

int main() {
    int s, i; s=0;
    for (i=0; i<=100; i=i+1) if (i%3==0){
        s=s+i;
    }
    printf("%d\n", s);
    return 0;
}
