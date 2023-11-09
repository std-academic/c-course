
double P(int n, double x) {
    if (n == 0) return 1;
    if (n == 1) return x;

    double res = 0;
    res = (2*n - 1) * P(n-1, x);
    res -= (n - 1) * P(n-2, x);

    return res / n;
}