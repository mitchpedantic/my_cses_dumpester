#include <stdio.h>

unsigned long k, tot;

int main() {
    scanf("%lu", &k);
    for (unsigned long  i = 1; i <= k; i++) {
        tot = (i*i*(i*i-1)/2) - 4*(i-1)*(i-2);
        printf("%lu\n", tot);
    }
}