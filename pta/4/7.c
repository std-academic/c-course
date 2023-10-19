#include <stdio.h>

double disc(char typ) {
    return typ == 'm' ? 0.95 : 0.97; 
}
double bas(int typ, int amount) {
    return typ == 97 ? amount * 7.93 :
        (typ == 93 ? amount * 7.44 :
        amount * 6.95);
}

int main() {
    int a,b; char c[5];
    scanf("%d%d%s", &a,&b,c);
    printf("%.2f\n", bas(b, a) * disc(c[0]));
    return 0;
}