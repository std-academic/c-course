#include <stdio.h>
#define Max(a, b) ((a) > (b) ? a : b)
#define Min(a, b) ((a) < (b) ? a : b)

int main() {
    int n, i, j, a[114][114];
    int row[114], col[114];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) 
        for (j = 0; j < n; ++j) 
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < n; ++i) {
        row[i] = -114514,
        col[i] = 114514;
        for (j = 0; j < n; ++j) 
            col[i] = Min(col[i], a[j][i]),
            row[i] = Max(row[i], a[i][j]);
    }

    for (i = 0; i < n; ++i) 
        for (j = 0; j < n; ++j)
            if (col[j] == a[i][j] && row[i] == a[i][j])
                return !printf("%d %d\n", i, j);

    return !puts("NONE");
}

// note: return !printf(...) / return !puts("...")
// is equivalent to: {
//   printf("...") / puts("...");
//   return 0;
// }
// because printf / puts returns non-zero values
// unless there is an error occurred.
