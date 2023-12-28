
double f(int n,double *a, double x) {
    double s = 0, y = 1;
    int i;
    for (i=0; i<=n; ++i) s += a[i]*y, y*=x;
    return s;
}
