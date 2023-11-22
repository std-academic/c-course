#include <stdio.h>

int n, r, c = 0;
char a[114][114]; // Chessboard

void print() {
    int i, j;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j < n; ++j)
            printf("%c ", a[i][j]);
        printf("%c\n", a[i][n]);
    }
}

void read() {
    char buf[5]; int i, j;
    
    scanf("%d", &n); n *= 2;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= n; ++j) {
            scanf("%s", buf);
            a[i][j] = buf[0];
        }
}

int main() {
    int k, x1, y1, x2, y2;

    read();
    r = n * n; c = 0;
    
    scanf("%d", &k);
    while (k--) {
        scanf("%d%d%d%d", &x1,&y1,&x2,&y2);

        if (a[x1][y1] == a[x2][y2] && a[x1][y1] != '*') {
            a[x1][y1] = a[x2][y2] = '*';
            
            r -= 2;
            if (r) print();
        } else {
            puts("Uh-oh");
            ++c;
        }

        if (c == 3) 
            return !puts("Game Over");
        else if (!r)
            return !puts("Congratulations!");
    }
    return 0;
}
