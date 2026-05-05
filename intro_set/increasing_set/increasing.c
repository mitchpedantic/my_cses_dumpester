#include <stdio.h>
__uint64_t max, scn, inc, count = 0, pre = 0U;

int main(){
    scanf("%lu", &max);
    while ((max--) > 0) {
        scanf("%lu", &scn);
        inc = ((__uint64_t)(pre>scn))*(pre-scn);
        count += inc; pre=scn+inc;
    }
    printf("%lu", count);
}