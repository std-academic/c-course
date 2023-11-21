
int FindArrayMax(int *a, int n) {
    int i, mx = a[0];
    for (i = 1; i < n; ++i)
        if (a[i] > mx) {
            mx = a[i];
        }
    return mx;
}
