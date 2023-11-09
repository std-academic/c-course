#include <stdio.h>

int countdigit(int number, int digit) {
    if (number == 0) return digit == 0;

    number = number < 0 ? -number : number;

    int res = 0;
    while (number) {
        res += number % 10 == digit;
        number /= 10;
    }

    return res;
}

int main() {
    int number, digit;
    printf("Enter number: "); scanf("%d", &number);
    printf("Enter digit: "); scanf("%d", &digit);
    printf("Number of digit %d in %d: %d\n", digit,number, countdigit(number,digit));

    return  0;
}