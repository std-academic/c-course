
int Ack(int m, int n) {
    if (m == 0)
        return n + 1;
    
    if (n == 0)
        return Ack(m - 1, 1);
    
    return Ack(m-1, Ack(m, n-1));
}