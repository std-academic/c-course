#include <stdio.h>

int main() {
    int r, n, x, i;
    scanf("%d%d", &r,&n);
    for(i=1;i<=n;++i) {
        scanf("%d",&x);
        if(x<0) break;
        if(x==r) {
            if(i==1)puts("Bingo!");
            else if(i<=3) puts("Lucky You!");
            else puts("Good Guess!");
            return 0;
        }
        if(x<r) {
            puts("Too small");
        }else puts("Too big");
    }
    puts("Game Over");
    return 0;
}