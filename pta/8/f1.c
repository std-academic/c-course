
int sum(int n) {
// recursive, low-eff
    if (n <= 0) return 0;
    return sum(n - 1) + n;
}
