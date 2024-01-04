
void fsort(char *color[], int n) {
    int i, j; char *t;
    for (i = 0; i < n; ++i)
        for (j = i+1; j < n; ++j)
            if (strcmp(color[i], color[j]) > 0) {
                t = color[i],
                color[i] = color[j],
                color[j] = t;
            }
}
