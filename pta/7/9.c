
int reverse(int n) {
    int sig = n < 0;
    n = sig ? -n : n;

    int m = 0, i;
    while (n) {
        m *= 10;
        m += n % 10;
        n /= 10;
    }
    return sig ? -m : m;
}
