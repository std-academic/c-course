double fact(int n){
    double r=1;
    for (; n--; ) {
        r *= (n+1);
    }
    return r;
}