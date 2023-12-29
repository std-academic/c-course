#include <stdio.h>

typedef struct {
    char id[11], name[114];
    int x, y, z;
    int sum;
} Stu;

Stu a[15];
int n;

int main() {
    int i, M = 0, Mi = 0;
    scanf("%d", &n);
    for (i=1; i<=n; ++i) {
        scanf("%s%s%d%d%d", a[i].id, a[i].name, &a[i].x,&a[i].y,&a[i].z);
        a[i].sum = a[i].x+a[i].y+a[i].z;
        if (a[i].sum > M) M = a[i].sum, Mi = i;
    }
    Stu const*p = &a[Mi];
    printf("%s %s %d\n", p->name, p->id, p->sum);
    return 0;
}
