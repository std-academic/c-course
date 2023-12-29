#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[11], birth[114], contact[1145];
} Person;

int cmp(const Person *a, const Person *b) {
    int i;
    for (i = 0; i < 8; ++i)
        if (a->birth[i] != b->birth[i])
            return a->birth[i] < b->birth[i] ? -1 : 1;
    return 0;
}

Person a[15];
int n;

int main() {
    int i;
    scanf("%d", &n);
    for (i=0; i<n; ++i) {
        scanf("%s%s%s", a[i].name,a[i].birth,a[i].contact);
    }
    qsort(a, n, sizeof(Person), cmp);
    
    for (i=0; i<n; ++i)
        printf("%s %s %s\n", a[i].name,a[i].birth,a[i].contact);
    return 0;
}
