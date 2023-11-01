
int gcd(int x, int y) { // 辗转相除法
    if (y == 0) return x;
    return gcd(y, x % y);
}
