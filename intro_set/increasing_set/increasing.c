#include <stdio.h>
__uint64_t max, iter, scn, inc, count = 0, pre = 0U;

int main(){
    scanf("%lu", &max);
    for (iter = (max/200001U)*(max); iter < max; iter++) {
        scanf("%lu", &scn);
        inc = ((__uint64_t)(pre>scn))*(pre-scn);
        count += inc; pre=scn+inc;
    }
    printf("%lu", count);
}