#include <stdio.h>

int n;
int a[114], c = 0;
int answer_count = 0;

void print() {
    int i;

    printf("%d=%d", n, a[1]); // 'n=a[1]'
    for (i = 2; i <= c; ++i)
        printf("+%d", a[i]); // '+a[2]+a[3]+...+a[c]'

    ++answer_count;
    if (c != 1) { // SP: no appendix for last answer
        if (answer_count % 4) putchar(';');
        else putchar('\n');
    }
}

void factor(int x, int pre) {
    int i;

    if (x == 0) return print();
    if (x < pre) return; // illegal answer

    ++c;
    for (i = pre; i <= x; ++i) {
        a[c] = i;
        factor(x - i, i);
    }
    --c;
}

int main() {
    scanf("%d", &n);
    factor(n, 1);
    return 0;
}
