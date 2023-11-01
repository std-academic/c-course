
int CountDigit(int n, int d) {
    if (n == 0) return d == 0;
    
    int res = 0;

    n = n < 0 ? -n : n;

    while (n != 0) {
        res += n % 10 == d;
        n /= 10;
    }
    return res;
}