#include <stdio.h>

typedef struct {
    char id[11], name[114];
    int score;
} Stu;

Stu a[15];
int n;

int main() {
    int i, sum = 0;
    scanf("%d", &n);
    for (i=1; i<=n; ++i) {
        scanf("%s%s%d", a[i].id, a[i].name, &a[i].score);
        sum += a[i].score;
    }
    printf("%.2f\n", 1. * sum / n);
    for (i=1; i<=n; ++i) if (a[i].score * n < sum) {
        printf("%s %s\n", a[i].name, a[i].id);
    }
    return 0;
}
