
// 位运算做，一种新的方法。递归也可
void dectobin(int n) {
    int i, f = 0;
    for (i = 31; i >= 0; --i) {
        if ((n >> i) & 1) { // 这表示判断 n 的二进制的第 i 位是否为 1.
            putchar('1'); f = 1;
        } else if (f) putchar('0');
    }
    if (!f) putchar('0'); // n == 0
}
