
void _d(int x) {
    if (x == 0) return;
    _d(x >> 1);
    putchar((x & 1) + '0');
}
void dectobin(int n) {
    if (n == 0) putchar('0');
    else _d(n);
}
