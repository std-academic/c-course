#include <stdio.h>
#include <math.h>
#include <string.h>

int m, n; // Tip: long = int  on modern computers
// range = -2^31 ~ (2^31 - 1)

int primes[114514];
int prime_sieve[11451419];
int prime_count = 0;

void sieve_for_primes() {
    int i, j;

    int N = n * n + n;

    memset(prime_sieve, 0, sizeof(prime_sieve));
    prime_count = 0;
    
    for (i = 2; i <= N; ++i) {
        if (prime_sieve[i]) continue;

        if (i >= m && i <= n) primes[++prime_count] = i;
        for (j = i + i; j <= N; j += i)
            prime_sieve[j] = 1;
    }
}

int isprime(int x) {
    if (x <= 1) return 0;
    return !prime_sieve[x];
}

int main() {
    int i, j, k, p, q, r, c = 0;
    scanf("%d%d", &m, &n);
    sieve_for_primes();

    for (i = 1; i < prime_count; ++i)
        for (j = i + 1; j < prime_count; ++j)
            for (k = j + 1; k <= prime_count; ++k) {
                p = primes[i], q = primes[j], r = primes[k];
                if (isprime(p*q+r) && isprime(q*r+p) && isprime(r*p+q))
                    ++c;
            }
    printf("%d\n", c);
    return 0;
}
