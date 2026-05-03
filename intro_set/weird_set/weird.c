#include <stdio.h>
__U64_TYPE x;
int main(void) {
    scanf("%llu", &x);
    if((x-1)/1000000U) return-1;
    printf("%llu", x);
    while (x > 1) printf(" %llu", (x = (x%2 ? (x*3U + 1U) : x/2U), x));
    return 0;
}