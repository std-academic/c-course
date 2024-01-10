#include <stdio.h>

void move(int n, char A, char B) {
    printf("Move disk %d from %c to %c\n", n, A, B);
}
void hanoi(int n, char A, char B, char C) {
    if (n > 0) {
        hanoi(n - 1, A, C, B);
        move(n, A, C);
        hanoi(n - 1, B, A, C);
    }
}

int main() {
    int n; scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
