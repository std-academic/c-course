#include <stdio.h>

int n;
int a[114], b[114];

int v[114][114][10]; // [school][team][person]

int main() {
    int i, j, k, M = 0, cur, pre = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] > M) M = a[i];
    }

    memcpy(b, a, sizeof(b));

    cur = 0;
    for (i = 1; i <= M; ++i) {
        int t = 0, t2 = 0;
        for (j = 1; j <= n; ++j) if (a[j]) ++t;

        if (t != 1) {
            for (j = 1; j <= n; ++j) if (a[j]) {
                --a[j]; ++t2;
                for (k = 0; k < 10; ++k) {
                    v[j][i][k] = cur + t2 + t * k;
                }
                pre = j;
            }
            cur += t * 10;
        } else { // only 1 school is remaining
            for (j = 1; j <= n; ++j) {
                // if previous school is the same school cur + 1
                if (a[j] && pre == j) ++cur;
                
                while (a[j]) {
                    --a[j];
                    for (k = 0; k < 10; ++k) {
                        v[j][i][k] = cur + k * 2 + 1;
                    }
                    ++i;
                    cur += 20;
                }
            }
            break;
        }
    }

    for (i = 1; i <= n; ++i) {
        printf("#%d\n", i);
        for (j = 1; j <= b[i]; ++j) {
            for (k = 0; k < 9; ++k)
                printf("%d ", v[i][j][k]);
            printf("%d\n", v[i][j][9]);
        }
    }
}