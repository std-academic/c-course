#include <stdio.h>
#include <math.h>
#include <string.h>

long n; // Tip: long = int  on modern computers
// range = -2^31 ~ (2^31 - 1)

int primes[114514];
int prime_sieve[11451419];
int prime_count = 0;

// For clarity the primes are sieved into an array
// and then N is factorized.

void sieve_for_primes() {
    int m = sqrt(n), i, j;

    memset(prime_sieve, 0, sizeof(prime_sieve));
    prime_count = 0;
    
    for (i = 2; i <= m; ++i) {
        if (prime_sieve[i]) continue;

        primes[++prime_count] = i;
        for (j = i + i; j <= m; j += i)
            prime_sieve[j] = 1;
    }
}

void factorize() {
    int i, j;

    for (i = 1; i <= prime_count; ++i)
        if (n % primes[i] == 0) {
            j = 0;
            while (n % primes[i] == 0)
                n /= primes[i],
                ++j;
            
            if (j == 1) printf("%d", primes[i]);
            else printf("%d^%d", primes[i], j);

            if (n != 1) putchar('*');
        }
    
    if (n != 1) printf("%ld", n);
    putchar('\n');
}

int main() {
    scanf("%ld", &n);
    sieve_for_primes();

    printf("%ld=", n);
    if (n != 1)
        factorize();
    else
        puts("1");
    return 0;
}
